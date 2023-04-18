#include <iostream>

using namespace std;

main(){
setlocale (LC_ALL, "Portuguese");
int  numero,numero2;


cout << "Informe o número desejado para fazer a Tabuada:";
cin >> numero;

cout << "Até que número deseja multiplicar?";
cin >> numero2;

for(int i = 0; i <=numero2 ; i++){
        cout<<numero<<" X "<< i <<" = " << numero * i << endl;
    }
}
