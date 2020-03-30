#include <iostream>

using namespace std;

int main()
{
    //wyjasnic to 
    int tab[10]={0,1,2,3,4,5,6,7,8,9};
    int *q = tab;
    int i = 3;
    cout << q <<endl;
    cout<<"tab[i]: "<<tab[i]<<endl;
    cout<<"i[tab]: "<<i[tab]<<endl;
    i++;
    cout<<"*(i+tab): "<<*(i+tab)<<endl;
    return 0;
}