#include <iostream>

using namespace std;

int main() {  
    //Wypisywanie int w C 
    printf("%d\n", 15);
    //Wypisywanie int w C++
    cout << 15 << endl;
    //Wypisywanie char w C
    printf("%c\n", 's');
    //Wypisywanie char w C++
    cout << 's' << endl;
    //Wypisywanie float w C
    printf("%f\n", 10.63);
    //Wypisywanie float w C++
    cout << double(10.63) << endl;
    //Wypisywanie string w C
    char *string = "ala ma kota";
    printf("%s\n", string);
    //Wypisywanie string w C++
    cout << "ala ma kota" << endl;
    //Wypisywanie HEX w C
    printf("%x\n", 10);
    //Wypisywanie HEX w C++
    cout << hex << 10 << endl;
}