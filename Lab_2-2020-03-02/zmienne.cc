#include<iostream>
#include <iomanip>
using namespace std;
typedef int my_int;

int main() {
    my_int zmienna = 100;
    cout << zmienna << endl;
    int a = 1;
    float b = 0.1;
    double c = 0.01;
    auto f = 0.03123;
    char string[] = "test string";

    int test1 = 3;
    int test2 = 9;

    cout << "Rozmiar int: " << sizeof(a) << endl;
    cout << "Rozmiar char: " << sizeof(string) << endl;
    cout << "Rozmiar float: " << sizeof(b) << endl;
    cout << "Rozmiar auto: " << sizeof(f) << endl;
    cout << "Rozmiar double: " << sizeof(c) << endl;
    
    

    cout << (double) test1/test2 << endl;
    cout << test1 / double(test2) << endl;
    cout << double(test1) / test2 << endl;

    double c1 = static_cast<double>(test1) / test2;
    double c2 = static_cast<double>(test1) /  static_cast<double>(test2);

    cout << c1 << endl;
    cout << c2 << endl;

    std::cout << std::fixed << std::setprecision(2) << "c1: " << c1 << endl;
    std::cout << std::fixed << std::setprecision(2) << "c2: " << c2 << endl;
    std::cout << std::fixed << std::setprecision(2) << "a/b: " << test1/test2 << endl;


    return 0;
}