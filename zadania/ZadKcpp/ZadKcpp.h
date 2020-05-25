#ifndef ZADKCPP_ZADKCPP_H
#define ZADKCPP_ZADKCPP_H

#include <string>
#include <cstdio>
#include<iostream>
#include<fstream>

using namespace std;


class ZadKcpp {
private:
    void Pierwsza();

    void Druga();

    void Trzecia();

    void Czwarta();

    void Piata();

    int value;

    int idx;

    int sum;

    static char test[6];

    static string names[3];

    string s;

    string str;

    ofstream file;

    ifstream readFile;

    string line;

public:
    ZadKcpp() {
        value = 0;
    }

    ZadKcpp(int n) {
        value = n;
    }

    static int myArray[9];

    void mainExample(int argc, char *argv[]);

    int getValue();

    int A(int a);

    int B(int &a);

    int *C(int a);

    void D(int a);

    void zwracanie();

    void adresowaniePamieci();

    void iq();

    void arytmetykaWskaznikow();

    void wywolanieFunkcji(int argc, char *argv[]);

    void priorytetyOperatorow();

    void decToBin(int n);

    int binToDec(string n);

    void writeToFile();

    void readFromFile();

    void CinCoutFile();

    int Szukaj(char tab[], char c);

    void SzukajPrzyklad();

    void _while();

    void _do_while();

    void _continue();

    void Petle();

    int index(string names[], string s);

    void Switch();
};

#endif