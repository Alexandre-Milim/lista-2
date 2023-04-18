#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num;
    cout << "Digite um número inteiro: ";
    cin >> num;

    cout << "Fatores primos de " << num << ": ";
    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            cout << i << " ";
            num /= i;
        }
    }

    cout << endl;
    return 0;
}
