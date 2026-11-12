#include <iostream>

using namespace std;

int main() {
    double soma = 0, nota;

    for (int i = 1; i <= 10; i++) {
        do {
            cout << "Digite a nota " << i << " (0 a 10): ";
            cin >> nota;
            if (nota < 0 || nota > 10) {
                cout << "Nota invalida! Tente novamente." << endl;
            }
        } while (nota < 0 || nota > 10);

        soma += nota;
    }

    double media = soma / 10.0;
    cout << "Media das 10 notas: " << media << endl;

    return 0;
}
