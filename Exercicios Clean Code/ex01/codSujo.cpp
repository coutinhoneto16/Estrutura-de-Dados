#include <iostream>
using namespace std;

int main() {
    int n, i, j;
    cout << "Digite um numero:";
    cin >> n;
    for (i = 1; i <= 10; i++) {
        cout << n << "x" << i << "=" << n * i << endl;
    }

    int a, b, c;
    cout << "digite tres numeros:";
    cin >> a >> b >> c;
    if (a > b && a > c) {
        cout << a << " maior";
    } else if (b > a && b > c) {
        cout << b << " maior";
    } else {
        cout << c << " maior";
    }
}