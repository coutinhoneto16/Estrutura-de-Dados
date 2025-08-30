//gerar um vetor com 50 numeros randomicos
#include <iostream>
#include <cstdio>
#include <ctime>

using namespace std;

int main(){

    int V[50];
    srand((time(NULL)));

    for (int i = 0; i < 50; i++){
        V[i] = rand();
        cout << V[i] << " ";
    }
}