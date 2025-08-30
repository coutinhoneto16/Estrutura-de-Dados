#include <iostream>
using namespace std;

int potencia(int base, int expoente) {
    if (expoente == 0) {
    return 1;
    }
return  base * potencia(base, expoente - 1);
}

int main() {
    int resultado = potencia(2, 3);
    cout << "2^3 = " << resultado << endl; // Espera-se 8
    return 0;
}