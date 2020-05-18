#include<iostream>
using namespace std;

void Przekazywanie(int *tab, int rozmiar) {
    double srednia = 0;
    for (int i = 0; i < rozmiar; i++) {
        srednia += tab[i];
    }
    srednia = (double)srednia / rozmiar;
    cout << "Średnia liczb: " << srednia << endl;
}

int main() {
    int list[5] = {1, 2, 3, 4, 5};
    Przekazywanie(list, sizeof(list)/sizeof(*list));
}
