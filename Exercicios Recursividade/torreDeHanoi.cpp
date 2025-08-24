#include <iostream>
#include <string>
using namespace std;
void torreDeHanoi(int n, string origem, string destino, string auxiliar) {
 // Caso Base: Complete a condição de parada.
 if (n == 0) {
 return;
 }
 // Chamada Recursiva 1: Mova n-1 discos da origem para o auxiliar.
 torreDeHanoi(n - 1, origem , auxiliar, destino );
 // Passo 2: Imprima o movimento do disco n.
 cout << "Mova o disco " << n << " do " << origem << " para o " << destino << endl;
 // Chamada Recursiva 2: Mova n-1 discos do auxiliar para o destino.
 torreDeHanoi(n - 1, auxiliar, destino, origem);
}
int main() {
 int nDiscos = 4;
 cout << "Passos para resolver a Torre de Hanoi com " << nDiscos << " discos:\n";
 torreDeHanoi(nDiscos, "Pino A", "Pino C", "Pino B");
 return 0;
}