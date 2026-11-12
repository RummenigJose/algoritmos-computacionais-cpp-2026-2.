#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double peso, altura, imc;

    cout << "Peso (kg): ";
    cin >> peso;
    cout << "Altura (m): ";
    cin >> altura;

    if (peso <= 0 || altura <= 0) {
        cout << "Erro: Peso e altura devem ser maiores que zero." << endl;
    } else {
        imc = peso / (altura * altura);

        cout << fixed << setprecision(2);
        cout << "IMC: " << imc << endl;

        if (imc < 18.5) {
            cout << "Classificacao: Abaixo do peso." << endl;
        } else if (imc < 25.0) {
            cout << "Classificacao: Faixa usual." << endl;
        } else if (imc < 30.0) {
            cout << "Classificacao: Sobrepeso." << endl;
        } else {
            cout << "Classificacao: Obesidade." << endl;
        }
    }

    return 0;
}
