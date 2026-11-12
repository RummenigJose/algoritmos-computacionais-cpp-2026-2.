#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Digite um numero: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " nao e um numero primo." << endl;
    } else {
        int divisores = 0;

        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            cout << n << " e um numero primo." << endl;
        } else {
            cout << n << " nao e um numero primo." << endl;
        }
    }

    return 0;
}
