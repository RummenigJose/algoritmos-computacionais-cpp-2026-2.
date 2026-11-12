#include <iostream>

using namespace std;

int main() {
    double n1, n2, resultado;
    char operacao;

    cout << "Primeiro numero: ";
    cin >> n1;
    cout << "Segundo numero: ";
    cin >> n2;
    cout << "Operacao (+, -, *, /): ";
    cin >> operacao;

    if (operacao == '+') {
        resultado = n1 + n2;
        cout << "Resultado: " << resultado << endl;
    } else if (operacao == '-') {
        resultado = n1 - n2;
        cout << "Resultado: " << resultado << endl;
    } else if (operacao == '*') {
        resultado = n1 * n2;
        cout << "Resultado: " << resultado << endl;
    } else if (operacao == '/') {
        if (n2 == 0) {
            cout << "Erro: Divisao por zero nao permitida!" << endl;
        } else {
            resultado = n1 / n2;
            cout << "Resultado: " << resultado << endl;
        }
    } else {
        cout << "Erro: Operacao invalida!" << endl;
    }

    return 0;
}
