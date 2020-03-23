#include <iostream>
#include <iterator>
using namespace std;


int A(int a) { 
	return a;
}

int B(int &a) { 
	return a;
}


int *C(int a) { 
	a++;
	int *b = &a;
	return b;
}

void D(int tab[]){
    for (int i = 0; i<6; i++){
        cout << i << "\t" << tab[i] << endl;
     }
  
}

int main() {

	int a = 4;   


	cout << "wartosc\t\t" << A(a) << endl;


	cout << "referencje\t" << B(a) << endl;    

	cout << "wskaznik\t" << C(a) << endl;    

	
	int tablica1D[6] = {1,2,3,4,5,6};
 
    // nazwa tablicy to wskaźnik na tablica[0]
    cout << "tablica" << endl; 
    D(tablica1D);
 

	return 0;
}
