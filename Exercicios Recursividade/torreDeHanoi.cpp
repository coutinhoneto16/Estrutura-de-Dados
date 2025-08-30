#include <iostream>
#include <string>
using namespace std;
void torreDeHanoi(int n, string origem, string destino, string auxiliar) {
    if (n == 0) {
        return;
 }
    torreDeHanoi(n - 1, origem , auxiliar, destino );
    cout << "Mova o disco " << n << " do " << origem << " para o " << destino << endl;
    torreDeHanoi(n - 1, auxiliar, destino, origem);
}
int main() {
    int nDiscos = 3;
    cout << "Passos para resolver a Torre de Hanoi com " << nDiscos << " discos:\n";
    torreDeHanoi(nDiscos, "Pino A", "Pino C", "Pino B");
}