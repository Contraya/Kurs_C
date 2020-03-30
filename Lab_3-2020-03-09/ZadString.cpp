#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    string myString = "Jakie jest Towje imie";
    string name = "Wiktor";
    string nazwisko = "Chylak";
    string test = "1234";
    for (int i = 0; i < myString.length(); i += 5 ) {
        myString[i] = 'O';
    }
    std::cout << "String1 " << myString << std::endl;
    std::cout << "Moje imie i nazwkisko " << name + ' ' + nazwisko << std::endl;
    for (int i = 0; i < test.length(); i++ ) {
        std::cout << "pojedynczy znak " << test[i] << std::endl;
    }
}