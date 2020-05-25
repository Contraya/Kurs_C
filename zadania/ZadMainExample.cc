#include <iostream>
using namespace std;
void Pierwsza() {
    cout << "funkcja 1" << endl;
}

void Druga() {
    cout << "funkcja 2" << endl;
}

void Trzecia() {
    cout << "funkcja 3" << endl;
}

extern "C" void Czwarta() {
    cout << "funkcja 4" << endl;
}

extern "C" void Piata() {
    cout << "funkcja 5" << endl;
}

int main(int argc, char *argv[]){
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