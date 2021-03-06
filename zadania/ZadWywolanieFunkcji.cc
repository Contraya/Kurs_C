//#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;

#define ROZMIAR 10

//--- dostep za pomoca indeksu --------------------------------------
void funA(){
  
  cout <<"Dostep za pomocą indeksu"<< endl;
  cout <<"----------------------------"<< endl;

	int tab[ROZMIAR];
	int i; 

	for(i = 0; i < ROZMIAR; i++) {
		cout <<"Wpisz wartosc: ";
		cin >> tab[i];
		//scanf("%d", &tab[i]);
		tab[i] = 2 * tab[i];  // tab[i] *= 2;
		cout <<"Tab["<<i<<"] = "<< tab[i] << endl;
		//printf("Tab[%d] = %d \n", i+1 , tab[i]);
	}
}


//--- dostep za pomoca adresu i indeksu ----------------------------
void funB(){

  cout <<"Dostep za pomocą adresu i indeksu"<< endl;
  cout <<"----------------------------"<< endl;

	int tab[ROZMIAR];
	int i; 
	int k;
	for(i = 0; i < ROZMIAR; i++) {

		//scanf("%d", tab+i);      //&*(tab+i) == tab+i
		cout <<"Wpisz wartosc: ";
		cin >> *(tab+i);
		*(tab+i) = 2 * *(tab+i);  // tab[i] *= 2;
		cout <<"Tab["<<i<<"] = "<< *(tab+i) << endl;
		//printf("Tab[%d] = %d \n", i+1 , *(tab+i));
	}
}



int main(int argc, char *argv[]){

  cout <<"Rozmiar tablicy zdefiniowany przez dyrektywę preprocesora"<< endl;
  cout <<"Rozmiar: "<< ROZMIAR << endl;

  //------ Sposób 1 ----------------------
  //if (argv[1] == "yes");              // Wrong, compares two pointers
  //if (strcmp(argv[1], "yes") == 0);   // This compares what the pointers point to
  //if (std::string(argv[1]) == "yes"); // Works fine
  //f (argv[1] == std::string("yes")); // Works fine


  if(argc == 2){
    if(argv[1] == string("funA")) funA();
    if(argv[1] == string("funB")) funB();
  }else{
    cout <<"Podaj jako argument: [funA|funB]"<< endl;
  }
  switch(argc){
  	case 2:
  		switch(argv[1]){
  			case ("funA"):
  			funA();
  			break;
  			case string("funB"):
  			funB();
  			break;
  		}
  }
  //----------------------------------------

  //------ Sposób 2 ------------------------
/*   string sArgument;
 *   cout <<"Podaj jako argument: [funA|funB]:"<< endl;
 *   cin >> sArgument;
 *
 *   if(sArgument == "funA"){
 *     funA();
 *   }
 *   else if(sArgument == "funB"){
 *     funB();
 *   }
 *   else {
 *     cout <<"Wrong argument" << endl;
 *   } */
 //-----------------------------------------

  //------ Sposób 3,4 ----------------------
  // Zaproponuj inne 2 sposoby wywołąnia funkcji
  //----------------------------------------
  

	return 0;
}
