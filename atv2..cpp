#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, soma = 0;
	
	cout << "Digite um número inteiro: ";
	cin >> num;
	
	while (num > 0){
		int digito = num % 10;
		soma += digito;
		num /= 10;
	}
	
	cout << "A soma dos dígitos do número é: " << soma << endl;
	return 0;
}

