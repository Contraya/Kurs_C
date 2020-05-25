#include <iostream>
#include <string>
#include "ZadKcpp.h"


using namespace std;

char ZadKcpp::test[6] = "test1";

string imiona[] = {"Ania", "Ola"};

void ZadKcpp::Pierwsza() {
    cout << "funkcja 1" << endl;
}

void ZadKcpp::Druga() {
    cout << "funkcja 2" << endl;
}

void ZadKcpp::Trzecia() {
    cout << "funkcja 3" << endl;
}

extern "C" void ZadKcpp::Czwarta() {
    cout << "funkcja 4" << endl;
}

extern "C" void ZadKcpp::Piata() {
    cout << "funkcja 5" << endl;
}

void ZadKcpp::mainExample(int argc, char *argv[]){
  cout << "Podaj liczbe do funkcji" << endl;                            
  for (int i = 1; i < argc; i++) {
    if (*argv[i] == '1') {
      Pierwsza();
    } else if (*argv[i] == '2') {
      Druga();
    } else if (*argv[i] == '3') {
      Trzecia();
    } else if (*argv[i] == '4') {
      Czwarta();
    } else if (*argv[i] == '5') {
      Piata();
    } else {
      cout << "Podaj 1 do 5" << endl;
    }
  }
}


int ZadKcpp::getValue() {
    return value;
}

int ZadKcpp::A(int a) { 
	return a;
}

int ZadKcpp::B(int &a) { 
	return a;
}


int *ZadKcpp::C(int a) { 
	a++;
	int *b = &a;
	return b;
}

void ZadKcpp::D(int *tab){
    for (int i = 0; i<6; i++){
        cout << i << "\t" << tab[i] << endl;
     }
}


void ZadKcpp::zwracanie() {
    int a = 4;   


	cout << "wartosc\t\t" << A(a) << endl;


	cout << "referencje\t" << B(a) << endl;    

	cout << "wskaznik\t" << C(a) << endl;    

	
	int tablica1D[6] = {1,2,3,4,5,6};
 
    // nazwa tablicy to wskaźnik na tablica[0]
    cout << "tablica" << endl; 
    D(tablica1D);
}

void ZadKcpp::adresowaniePamieci() {
    int a = 0;
    int b = 66;
    int c = 9000;
    // na swojej maszynie wirtualnej mam kierunek adresowania w dół
    cout << "Addres pierwszej zmiennej: " << (unsigned long) &a << endl;
    cout << "Addres drugiej zmiennej: " << (unsigned long) &b << endl;
    cout << "Addres trzeciej zmiennej: " << (unsigned long) &c << endl;
}

void ZadKcpp::iq() {
    int tab[10]={0,1,2,3,4,5,6,7,8,9};
    int *q = tab;
    int i = 3;
    cout << q <<endl;
    cout<<"tab[i]: "<<tab[i]<<endl;
    cout<<"i[tab]: "<<i[tab]<<endl;
    i++;
    cout<<"*(i+tab): "<<*(i+tab)<<endl;
}

void ZadKcpp::arytmetykaWskaznikow() {
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    int *p = a;
    cout<<"p++: "<<p++<<endl;;
    p++;
    cout<<"++p: "<<++p<<endl;
    ++p;
    cout<<"++*p: "<<++*p<<endl;
    cout << "*p = " << *p << endl;
    cout<<"++(*p): "<<++(*p)<<endl;
    cout << "*p = " << *p << endl;
    cout<<"++*(p): "<<++*(p)<<endl;
    cout<<"*p++: "<<*p++<<endl;
    cout << "*p = " << *p << endl;
    cout<<"(*p)++: "<<(*p)++<<endl;
    cout << "*p = " << *p << endl;
    cout<<"*(p)++: "<<*(p)++<<endl;
    cout<<"*++p: "<<*++p<<endl;
    cout << "*p = " << *p << endl;
    cout<<"*(++p): "<<*(++p)<<endl;
    cout << "*p = " << *p << endl;
}

void ZadKcpp::wywolanieFunkcji(int argc, char **argv) {

    if (argc < 2) {
        cout << "Podaj argument : " << endl;
        exit(1);
    }

    switch (*argv[1]) {
        case '1':
            Pierwsza();
            break;
        case '2':
            Druga();
            break;
        case '3':
            Trzecia();
            break;
        case '4':
            Czwarta();
            break;
        case '5':
            Piata();
            break;
        default:
            cout << "Zły argument" << endl;
            break;
    }

    (*argv[1] == '1') ? Pierwsza() : (*argv[1] == '2') ? Druga() : (*argv[1] == '3') ? Trzecia() : (*argv[1] == '4') ? Czwarta() : printf("Zły argument\n");
}

void ZadKcpp::priorytetyOperatorow() {
    int x = 1, y = 2, z = 3;
    int result[] = {4,4,4,4};
    result[0] *= -++x*x--+-y--%++z;
    cout << "0. " << result[0] << endl;

    result[1] *= -(++x)*(x--)+-(y--)%(++z);
    cout << "1. " << result[1] << endl;

    result[2] *= (-(++x))*(x--)+(-(y--))%(++z);
    cout << "2. " << result[2] << endl;

    result[3] *= ((-(++x))*(x--))+((-(y--))%(++z));
    cout << "3. " << result[3] << endl;
}

void ZadKcpp::decToBin(int n) {
    int binNumber[32];
    int i = 0;

    while (n > 0) {
        binNumber[i] = n % 2;
        n /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        cout << binNumber[j];
    }
    cout << endl;
}

int ZadKcpp::binToDec(string n) {
    int decimal = 0;
    int base = 1;
    int len = n.length();

    for (int i = len - 1; i >= 0; i--) {
        if (n[i] == '1')
            decimal += base;
        base *= 2;
    }

    return decimal;
}

void ZadKcpp::writeToFile() {
    string str;
    cout << "Zapis do pliku. Podaj co chcesz zapisać:  " << endl;

    getline(cin, str);
    ofstream file;
    file.open("ZadCinCoutFile.txt", ios_base::app);
    file << str << endl;
    file.close();
}

void ZadKcpp::readFromFile() {
    ifstream rfile;
    string line;
    rfile.open("file.txt");
    if(rfile.is_open()){
        while(getline(rfile, line)){
            cout << line << endl;
        }
        rfile.close();
    } else cout << "Błąd" << endl;
}

void ZadKcpp::CinCoutFile() {
    writeToFile();
    readFromFile();
}

int ZadKcpp::Szukaj(char *tab, char c) {
    int i = 0;
    while(true) {
        if (tab[i] == c) return i;
        else if (tab[i] == 'c') break;
        i++;
    }
    return -1;
}

void ZadKcpp::SzukajPrzyklad() {
    char test[] = "test1";
    cout << "pozycja t " << Szukaj(test, 't') << endl;
    cout << "pozycja 1 (break): " << Szukaj(test, '1') << endl;
    cout << "pozycja 2 (nie ma go): " << Szukaj(test, '2') << endl;
}

void ZadKcpp::_while() {
    int sum = 0;
    int i = 1;
    while(i <= 5){
        sum += i;
        i++;
    }
    cout << "Pętla while, suma = " << sum << endl;
}

void ZadKcpp::_do_while() {
    int i = 1;
    int sum = 0;
    do {
        sum += i;
        i++;
    } while (i <= 5);
    cout << "Pętla do while, suma = " << sum << endl;
}

void ZadKcpp::_continue() {
    for (int i = 0; i < 5;  i++) {
        if (i % 2 == 0) continue;
        cout << "Char := " << test[i] << endl;
    }  
}

void ZadKcpp::Petle() {
    SzukajPrzyklad();
    _while();
    _do_while();
    _continue();
}

int ZadKcpp::index(string *tab, string s, int size) {
    for(int i = 0; i < size; i++){
		if(tab[i] == s) return i;
	}
	return -1;
}

void ZadKcpp::Switch() {
    string imie;
	cout << "Podaj Ania żeby wyświetlić Ania analogiczie dla Ola" << endl;
	cin >> imie;
   switch(index(imiona, imie, sizeof(imiona)/sizeof(*imiona))){
	case 0:
		cout << "Wybrano Ania" << endl;
		break;
	case 1:
		cout << "Wybrano Ole" << endl;
		break;
	default:
		cout << "Nie wybrano imienia" << endl;
    }
}