#include <iostream>
#include <cstring>
using namespace std;

int main(){
	union unia{
		//stroing imie; //nie można używać stringów w  UNION
		char imie[50];
		int wiek;
	};
	union unia O;
	O.wiek = 23;
	strcpy(O.imie, "Wiktor");
	cout <<  "Imie" << O.imie << endl;
	cout << "Wiek" << O.wiek << endl;//daje wartość z pamięci i nie jest to przypisana wartość
	return 0;

}
