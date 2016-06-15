# Lab5

在h宣告好，在cpp定義好，在main執行。

compile:
all: main.o HugeInt.o
		g++ -o lab5 main.o HugeInt.o

main.o: main.cpp HugeInt.h
		g++ -c main.cpp

HugeInt.o: HugeInt.cpp HugeInt.h
		g++ -c HugeInt.cpp

clean:
		rm lab5 *.o
		
		
		usage:
		將大數(字串)經過acsll變成數字，存在陣列，將陣列數字變為原本大數字，存在字串，後相加。
