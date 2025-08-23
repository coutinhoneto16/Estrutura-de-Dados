#include <iostream>
#include <cstdio>

using namespace std;

void tabuada(int numTabuada){
    for (int i = 0; i <= 10; i++){
        printf("%d x %d = %d\n", numTabuada, i, numTabuada * i);
    }
}

int maiorNumero(int qtdNumeros){
    int maior;
    printf("Digite o primeiro número: ");
    cin >> maior;
    
    for (int i = 1; i < qtdNumeros; i++){
        printf("Digite o próximo número: ");
        int numero;
        cin >> numero;

        if (numero > maior){
            maior = numero;
        }
    }
    return maior;
}

int main(){
    tabuada(3);
    int maior = maiorNumero(3);
    printf("%d" ,maior);
}