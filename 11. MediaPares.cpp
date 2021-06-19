//Construa um algoritmo que calcule a média aritmética de um conjunto de números pares que 
//forem fornecidos pelo usuário. O valor de finalização será a entrada do número 0. Observe que 
//nada impede que o usuário forneça quantos números ímpares quiser, com a ressalva de que eles 
//não poderão ser acumulados.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declaração de variáveis:
    int i, numero, total;
    float media;
    setlocale(LC_ALL, "portuguese");
//Entrada:
    do {
		printf("%d. Digite um número: ", ++i);
		scanf("%d", &numero);
		if(numero >= 2 && numero % 2 == 0) {
		  media += numero;
			total++;}	
	} while(numero != 0);
media /= total;
//Saída:
	printf("\nMédia dos números pares: %.2f", media);
		
return 0;	
}
