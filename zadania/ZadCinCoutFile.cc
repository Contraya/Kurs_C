#include<iostream>
#include<fstream>
#include<cstring>
#include<string>
using namespace std;

int main() {
    string str;
    cout << "Zapis do pliku. Podaj co chcesz zapisać:  " << endl;

    getline(cin, str);
    ofstream file;
    file.open("ZadCinCoutFile.txt", ios_base::app);
    file << str << endl;
    file.close();
    cout << endl << "Czytanie z pliku" << endl << endl;

    ifstream rfile;
    string line;
    rfile.open("file.txt");
    if(rfile.is_open()){
        while(getline(rfile, line)){
            cout << line << endl;
        }
        rfile.close();
    } else cout << "Błąd" << endl;

    return 0;
}
