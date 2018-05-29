# tablez.c

## About
This program generates valid pd files containing seperate stereo tables. 

## Usage

tablez N foo.pd

Will create a file containing N\*2 tablez.
Useful for creating huge sample storage banks.

## Installation
```
git clone https://github.com/omfgitsatoad/tablez
```

```
cd tablez
```

```
make
```
This will create *bin* directory with the executable inside.
Program can be use via
```
./bin/tablez N file.pd
```

