#include <iostream>

using namespace std;

int Szukaj(char tab[], char c) {
    int i = 0;
    while(true) {
        if (tab[i] == c) return i;
        else if (tab[i] == 'c') break;
        i++;
    }
    return -1;
}
int main() {
    char test[] = "test1";
    cout << "pozycja t " << Szukaj(test, 't') << endl;
    cout << "pozycja 1 (break): " << Szukaj(test, '1') << endl;
    cout << "pozycja 2 (nie ma go): " << Szukaj(test, '2') << endl;    
    int sum = 0;
    int i = 1;
    while(i <= 5){
        sum += i;
        i++;
    }
    cout << "Pętla while, suma = " << sum << endl;
    i = 1;
    sum = 0;
    do {
        sum += i;
        i++;
    } while (i <= 5);
    cout << "Pętla do while, suma = " << sum << endl;
    for (i=0;i<5;i++) {
        if (i % 2 == 0) continue;
        cout << "Char := " << test[i] << endl;
    }  
    return 0;
}
