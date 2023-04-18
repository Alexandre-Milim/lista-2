#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	
    cout << "Digite um numero inteiro: ";
    cin >> num;
    
    cout << "Multiplos de " << num << " menores que 100:" << endl;
    
    for (int i = 1; i < 100; i++) {
        if (i % num == 0) {
            cout << i << endl;
        }
    }
    return 0;
}
