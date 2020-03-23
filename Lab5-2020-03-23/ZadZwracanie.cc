#include<iostream>
using namespace std;


void swapA(int a, int b) { // Przekazywanie zmiennych
	cout <<"\n---> Przez wartosc:"<< endl;
	int temp = a;
	a = b;
	b = temp;    
}

void swapB(int &a, int &b) { //Przekazywanie przez referencje
	cout <<"\n---> Przez referencje:"<< endl;
	int temp = a;
	a = b;
	b = temp;
}


void swapC(int *a, int *b) { //Przekazywanie przez wskaznik
	cout <<"\n---> Przez wskaznik:"<< endl;
	int *temp = a;
	a = b;
	b = temp;
}

void przekaz1D(int tab[]){ ///Przekazywanie tablic 1D
    for (int i = 0; i<6; i++){
        cout << i << "\t" << tab[i] << endl;
     }
    cout <<"Zmienić tablice w funkcji. Wypisać poza funkcją."<< endl;
    cout <<"Czy wartości poza funkcją się zmieniły?"<< endl;
    cout <<"-------------------"<< endl;
}

//---z zachowaniem rozmiaru --------
// Zadanie
void przekaz1DA(int tab[]){ 
	for (int i = 0; i<sizeof(*tab); i++){
        cout << i << "\t" << tab[i] << endl;
     }
	 cout <<"Zmienić tablice w funkcji. Wypisać poza funkcją."<< endl;
    cout <<"Czy wartości poza funkcją się zmieniły?"<< endl;
    cout <<"-------------------"<< endl;
 } 

//---------------------------------
void przekaz1Dwsk(int *tab){ ///Przekazywanie tablic 1D
    //Pass an array. Array decays to a pointer. Thus you lose size information
    //int iSize = *(&tab + 1) - tab;
    //cout <<"Tab size: "<< iSize << endl;
    for (int i = 0; i<6; i++){
        cout << i << "\t" << tab[i] << endl;
    }
    cout <<"Zmienić tablice w funkcji. Wypisać poza funkcją."<< endl;
    cout <<"Czy wartości poza funkcją się zmieniły?"<< endl;
    cout <<"-------------------"<< endl;
}


//--------------------------------
void przekaz2D(int tab[3][3]) {///Przekazywanie tablic 2D
	for (int i = 0; i<3; i++){
		for (int j = 0; j<3;j++) {
			cout <<"("<< i <<", "<< j <<")\t"<< tab[i][j] << endl;
		}
	}
  cout <<"-------------------"<< endl;
}






int main() {

	int A = 4;   
	int B = 6;

	cout <<"Przed: A = "<< A <<" B = "<< B << endl;

  //--- przez zmienne (copia) --------------
  swapA(A, B);
	cout <<"Po:    A = "<< A <<" B = "<< B << endl;


  //--- przez referencje -------------------
	swapB(A, B);    
	cout <<"Po:    A = "<< A <<" B = "<< B << endl;


	//--- przez wskaznik ----------------------
	int *wskA = &A;
	int *wskB = &B;
	swapC(wskA, wskB);    
	cout <<"Po:    A = "<< A <<" B = "<< B << endl;

	swapC(&A, &B);    
	cout <<"Po:    A = "<< A <<" B = "<< B << endl;
	
		int tablica1D[6] = {1,2,3,4,5,6};
 
    // nazwa tablicy to wskaźnik na tablica[0]
    przekaz1D(tablica1D);
    przekaz1Dwsk(tablica1D);

	przekaz1DA(tablica1D);

    //--------------------------------------
	int tablica2D[3][3];

	//Wypelnienie tablicy 2D
	for (int i = 0; i<3; i++){
		for (int j = 0; j<3;j++){
			tablica2D[i][j] = i+j;
		}
	}
	przekaz2D(tablica2D);

	return 0;
}
