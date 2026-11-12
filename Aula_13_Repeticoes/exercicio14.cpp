#include <iostream>

using namespace std;

int main() {
    int quantidadePares = 0;

    cout << "Numeros pares entre 1 e 100:" << endl;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            quantidadePares++;
        }
    }

    cout << "\nQuantidade de pares encontrados: " << quantidadePares << endl;

    return 0;
}
