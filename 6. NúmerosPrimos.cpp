//Elabore um algoritmo que imprima todos os n�meros primos existentes entre N1 e N2, em que 
//N1 e N2 s�o n�meros naturais fornecidos pelo usu�rio.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
	
//Declara��o de vari�veis:
    int N1, N2, numero, contador;
    setlocale(LC_ALL, "portuguese");
//Entrada:
    printf("1. Digite o n�mero: ");
    scanf("%d", &N1);
    printf("2. Digite o n�mero: ");
    scanf("%d", &N2);
//Sa�da:
    for(contador = N1; contador < N2; contador++) {
	  for(numero = 2; numero < contador; numero++){
		if(contador % numero != 0){
		  printf("%d\n", contador);}
		}
	}	
return 0;	
}
