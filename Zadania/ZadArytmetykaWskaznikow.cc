#include <iostream>
using namespace std;

int main(){
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    int *p = a;
    cout<<"p++: "<<p++<<endl;;
    p++;
    cout<<"++p: "<<++p<<endl;
    ++p;
    cout<<"++*p: "<<++*p<<endl;
    cout << "*p = " << *p << endl;
    cout<<"++(*p): "<<++(*p)<<endl;
    cout << "*p = " << *p << endl;
    cout<<"++*(p): "<<++*(p)<<endl;
    cout<<"*p++: "<<*p++<<endl;
    cout << "*p = " << *p << endl;
    cout<<"(*p)++: "<<(*p)++<<endl;
    cout << "*p = " << *p << endl;
    cout<<"*(p)++: "<<*(p)++<<endl;
    cout<<"*++p: "<<*++p<<endl;
    cout << "*p = " << *p << endl;
    cout<<"*(++p): "<<*(++p)<<endl;
    cout << "*p = " << *p << endl;

    return 0;
}