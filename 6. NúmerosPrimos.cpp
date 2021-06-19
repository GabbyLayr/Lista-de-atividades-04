//Elabore um algoritmo que imprima todos os números primos existentes entre N1 e N2, em que 
//N1 e N2 são números naturais fornecidos pelo usuário.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
	
//Declaração de variáveis:
    int N1, N2, numero, contador;
    setlocale(LC_ALL, "portuguese");
//Entrada:
    printf("1. Digite o número: ");
    scanf("%d", &N1);
    printf("2. Digite o número: ");
    scanf("%d", &N2);
//Saída:
    for(contador = N1; contador < N2; contador++) {
	  for(numero = 2; numero < contador; numero++){
		if(contador % numero != 0){
		  printf("%d\n", contador);}
		}
	}	
return 0;	
}
