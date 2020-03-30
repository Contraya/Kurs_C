#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(){
	char hello[] = "Ala ma kota"
	char str123[] = "Ala ma kota a kot ma Ale"
	char test[7];
	string test1;
	test1 = "Hello world"

	//strcpy(test, "dsadsadd");
	//strnpy(test, "dadwd", sizeof(test));
	//cout << "test: " << test[5] << endl;

	strncpy(test, str123, 5);
	cout << "test: " << test << endl;
	cout << "Wielkosc sizeof" << sizeof(test) << endl;
	cout << "test" << test << endl;
	return 0;
}
