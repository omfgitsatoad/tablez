#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]){

	if(argc < 3){
		printf("Usage: table N outfile.pd\n");
		printf("\twhere N is number of tables\n");
		return 1;
	}else{

		FILE *file;
		file = fopen(argv[2], "w");

		int x,y,i;
		x = 10;
		y = 10;
		i = 0;

		fprintf(file,"#N canvas 382 105 757 524 10;\n");

	
		while(i < atoi(argv[1])){
			fprintf(file,"#X obj %d %d table \\$0-%d-l;\n",x,y,i);
			fprintf(file,"#X obj %d %d table \\$0-%d-r;\n",20*x,y,i);
			y+=20;
			i++;
		}
		fprintf(file,"#X obj %d %d \\$0;\n",x,y+30);
		fprintf(file,"#X obj %d %d loadbang;\n",x,y);
	 	fprintf(file,"#X obj %d %d outlet;\n",x,y+60);
		fprintf(file,"#X connect %d 0 %d 0;\n",(2*i),(2*i)+2);
		fprintf(file,"#X connect %d 0 %d 0;\n",(2*i)+1,(2*i));
		fclose(file);
		return 0;
	}
}
