main: main.o ZadKcpp.o
	g++ main.o ZadKcpp.o -o main.o
	    
main.o: main.cpp
	g++ -c main.cpp -o main.o

ZadKcpp.o: ZadKcpp.cpp
	g++ -c ZadKcpp.cpp -o ZadKcpp.o
clean:
	rm -rf *.o
	rm ZadCinCoutFile.txt 