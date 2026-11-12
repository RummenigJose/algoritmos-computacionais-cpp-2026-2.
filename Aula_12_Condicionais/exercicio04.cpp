#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3;
    cout << "Primeiro numero: ";
    cin >> n1;
    cout << "Segundo numero: ";
    cin >> n2;
    cout << "Terceiro numero: ";
    cin >> n3;

    int maior = n1;

    if (n2 > maior) {
        maior = n2;
    }
    if (n3 > maior) {
        maior = n3;
    }

    cout << "Maior numero: " << maior << endl;

    return 0;
}
