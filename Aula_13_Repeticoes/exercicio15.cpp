#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Digite N (positivo): ";
    cin >> N;

    if (N <= 0) {
        cout << "Erro: O numero deve ser positivo." << endl;
    } else {
        int soma = 0;
        int i = 1;

        while (i <= N) {
            soma += i;
            i++;
        }

        cout << "Soma: " << soma << endl;
    }

    return 0;
}
