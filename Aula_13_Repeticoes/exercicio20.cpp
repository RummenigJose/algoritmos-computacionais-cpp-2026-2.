#include <iostream>

using namespace std;

int main() {
    int inicio, fim;

    cout << "Inicio do intervalo: ";
    cin >> inicio;
    cout << "Fim do intervalo: ";
    cin >> fim;

    if (inicio > fim) {
        cout << "Erro: O inicio nao pode ser maior que o fim." << endl;
    } else {
        int quantidadePrimos = 0;
        cout << "Numeros primos: ";

        for (int n = inicio; n <= fim; n++) {
            if (n > 1) {
                int divisores = 0;
                for (int i = 1; i <= n; i++) {
                    if (n % i == 0) {
                        divisores++;
                    }
                }
                if (divisores == 2) {
                    cout << n << " ";
                    quantidadePrimos++;
                }
            }
        }

        cout << "\nQuantidade de primos: " << quantidadePrimos << endl;
    }

    return 0;
}
