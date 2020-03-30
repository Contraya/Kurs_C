#include <iostream>
#include <string>
using namespace std;

namespace name {
    string name = "Wiktor"; 
}

int main(){
    std::cout << "Moje imie " << name::name << std::endl;
  return 0;
}