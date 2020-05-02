all:cosmet.o main.o laba

cosmet.o: cosmet.cpp
	g++ -c -o cosmet.o cosmet.cpp

main.o: main.cpp
	g++ -c -o main.o main.cpp

laba: cosmet.o main.o
	g++ main.o cosmet.o -o laba

