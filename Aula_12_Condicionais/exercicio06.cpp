#include <iostream>

using namespace std;

int main() {
    double valorCompra, percentualDesconto = 0.0;

    cout << "Digite o valor da compra: R$ ";
    cin >> valorCompra;

    if (valorCompra < 0) {
        cout << "Erro: O valor da compra nao pode ser negativo." << endl;
    } else {
        if (valorCompra >= 500.0) {
            percentualDesconto = 0.15;
        } else if (valorCompra >= 300.0) {
            percentualDesconto = 0.10;
        } else if (valorCompra >= 100.0) {
            percentualDesconto = 0.05;
        } else {
            percentualDesconto = 0.0;
        }

        double desconto = valorCompra * percentualDesconto;
        double total = valorCompra - desconto;

        cout << "Valor original: R$ " << valorCompra << endl;
        cout << "Desconto: R$ " << desconto << " (" << (percentualDesconto * 100) << "%)" << endl;
        cout << "Total: R$ " << total << endl;
    }

    return 0;
}
