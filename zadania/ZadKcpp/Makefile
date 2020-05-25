main: main.o ZadKcpp.o
	g++ main1.o ZadKcpp.o -o main.o
	    
main.o: main.cc
	g++ -c main.cc -o main1.o

ZadKcpp.o: ZadKcpp.cc
	g++ -c ZadKcpp.cc -o ZadKcpp.o
clean:
	rm -rf *.o
	rm ZadCinCoutFile.txt 