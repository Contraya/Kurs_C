#include <iostream>
#include <cstring>

using namespace std;

int index(string tab[], string s, int size){
	for(int i = 0; i < size; i++){
		if(tab[i] == s) return i;
	}
	return -1;
}

int main(){
	string imiona[] = {"Ania", "Ola"};
	string imie;
	cout << "Podaj Ania żeby wyświetlić Ania analogiczie dla Ola" << endl;
	cin >> imie;
	switch(index(imiona, imie, sizeof(imiona)/sizeof(*imiona))){
	case 0:
		count << "Wybrano Ania" << endl;
		break;
	case 1:
		cout << "Wybrano Ole" << endl;
		break;
	default:
		cout << "Nie wybrano imienia" << endl;
	}
	return 0;
}
