//gerar um vetor com 50 numeros randomicos e depois ordenar
#include <iostream>
#include <cstdio>
#include <ctime>

using namespace std;

int gerarVetor (int tam){
    int V[tam];
    srand((time(NULL)));

    for (int i = 0; i < tam; i++){
        V[i] = rand();
        cout << V[i] << " ";
    }

    return V[tam];
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void ordenar(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){

    int vetor[] = {gerarVetor(50)};

    ordenar(vetor, 50);

    printArray(vetor, 50);
    
}