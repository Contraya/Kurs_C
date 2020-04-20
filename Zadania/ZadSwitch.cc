#include <iostream>

using namespace std;

int main(){
	char imie2[10];
	cout << "Podaj Ania żeby wyświetlić Ania analogiczie dla Ola" << endl;
	cin >> imie2;
	switch(imie2[0]){
	case 'A': case 'a':
		switch(imie2[1]){
			case 'n': case 'N':
				switch(imie2[2]){
					case 'i': case 'I':
						switch(imie2[3]){
							case 'A': case 'a':
								cout << "Wybrano Anie" << endl;
								break;
						}break;				
				}break;		
		}break;
	case 'O': case 'o':
		switch(imie2[1]){
			case 'l': case 'L':
				switch(imie2[2]){
					case 'a': case 'A':
						cout << "Wybrano Olę" << endl;
						break;
				}break;
		
		}break;
	
	default:
		cout << "Nie wybrano!" << endl;
	}
	return 0;
}
