#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Digite um numero (0 a 20): ";
    cin >> n;

    if (n < 0 || n > 20) {
        cout << "Erro: Numero fora do intervalo permitido (0 a 20)." << endl;
    } else {
        unsigned long long fatorial = 1;

        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }

        cout << "Fatorial de " << n << ": " << fatorial << endl;
    }

    return 0;
}
