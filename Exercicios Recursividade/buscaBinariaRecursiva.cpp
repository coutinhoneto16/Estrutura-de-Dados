#include <iostream>
using namespace std;
bool buscaBinaria(int arr[], int esquerda, int direita, int valor) {

    if (esquerda > direita) {
        return false;
    }
    int meio = esquerda + (direita - esquerda) / 2;

    if (arr[meio] == valor) {
        return true;
    }
    if (arr[meio] > valor) {
        return buscaBinaria(arr, esquerda, meio - 1, valor);
    }
    else {
        return buscaBinaria(arr, meio + 1, direita , valor);
    }
}
int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = 10;
    if (buscaBinaria(arr, 0, n - 1, 23)) {
        cout << "Valor encontrado!" << endl;
    } else {
        cout << "Valor nao encontrado." << endl;
    }
 return 0;
}
