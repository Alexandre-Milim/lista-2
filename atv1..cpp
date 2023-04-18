 #include <iostream>
 
 main(){
 	setlocale(LC_ALL, "Portuguese");
 	int numero, quantidadeDeDivisores;
 	
 	quantidadeDeDivisores = 0;
 	
 	printf("\nDivisores de um numero qualquer.\n\n");
 	
 	printf("Insira um número: ");
 	scanf("%d", &numero);
 	
 	printf("\n D(%d): ", numero);
 	
    for (int i = 1; i <= numero; ++i) {
        if (numero % i == 0) {
            printf(" %d ", i);
            quantidadeDeDivisores++; 
        }
    }

    printf("\n\n Numero de divisores: %d\n\n", quantidadeDeDivisores);

    system("pause");
    return 0; 
 }
