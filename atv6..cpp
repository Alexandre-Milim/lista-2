#include <iostream>

using namespace std;

main(){
    int prim = 0, seg = 1, prox, numero;

    cout << "Digite um numero inteiro: ";
    cin >> numero;

    cout << "Sequencia de Fibonacci ate o " << numero << " o termo:" << endl;

    for (int x = 0; x < numero; x++){
        if (x <= 1){
            prox = x;
        } else{
            prox = prim + seg;
            prim = seg;
            seg = prox;
        }
        cout << prox << " ";
    }
}
