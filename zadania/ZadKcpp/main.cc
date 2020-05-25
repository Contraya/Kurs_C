#include "ZadKcpp.h"
#include <iostream>
#include <string>


using namespace std;

int main(int argc, char *argv[]) {
    ZadKcpp obj(128);

    obj.mainExample(argc, argv);

    obj.zwracanie();

    obj.adresowaniePamieci();

    obj.iq();

    obj.arytmetykaWskaznikow();

    obj.wywolanieFunkcji(argc, argv);

    obj.priorytetyOperatorow();

    cout << obj.binToDec("11111") << endl;

    obj.decToBin(31);

    obj.CinCoutFile();

    obj.Petle();

    obj.Switch();

    return 0;
}