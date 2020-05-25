main: main.o ZadKcpp.o
	g++ main.o ZadKcpp.o -o main.o
	    
main.o: main.cc
	g++ -c main.cc -o main.o

ZadKcpp.o: ZadKcpp.cc
	g++ -c ZadKcpp.cc -o ZadKcpp.o
clean:
	rm -rf *.o
	rm ZadCinCoutFile.txt 