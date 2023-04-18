#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, i = 0;
	int vet[100];
	
	
	cout << "Digite um número inteiro: ";
	cin >> num;
	
	cout << "O valor em binário é: ";
	
	while(num > 1){
		vet[i] = num % 2;
		num = num / 2;
		
		if(num == 0 || num == 1) {
			vet[i + 1] = num;
		}
		
		i = i + 1;
	}
	
	for(i; i >= 0; i--) {
		cout << vet[i];
	}
	
  	cout << endl;
  	return 0;
}
