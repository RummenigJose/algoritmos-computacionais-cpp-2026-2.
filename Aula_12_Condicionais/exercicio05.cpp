#include <iostream>

using namespace std;

int main() {
    double n1, n2, media;

    cout << "Primeira nota: ";
    cin >> n1;
    cout << "Segunda nota: ";
    cin >> n2;

    if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10) {
        cout << "Erro: Notas invalidas! Devem estar entre 0 e 10." << endl;
    } else {
        media = (n1 + n2) / 2.0;
        cout << "Media: " << media << endl;

        if (media >= 7.0) {
            cout << "Situacao: Aprovado." << endl;
        } else if (media >= 4.0) {
            cout << "Situacao: Recuperacao." << endl;
        } else {
            cout << "Situacao: Reprovado." << endl;
        }
    }

    return 0;
}
