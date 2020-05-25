#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 66;
    int c = 9000;
    // na swojej maszynie wirtualnej mam kierunek adresowania w dół
    cout << "Addres pierwszej zmiennej: " << (unsigned long) &a << endl;
    cout << "Addres drugiej zmiennej: " << (unsigned long) &b << endl;
    cout << "Addres trzeciej zmiennej: " << (unsigned long) &c << endl;
    return 0;
}
