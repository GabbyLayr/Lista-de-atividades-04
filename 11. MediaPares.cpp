//Construa um algoritmo que calcule a m�dia aritm�tica de um conjunto de n�meros pares que 
//forem fornecidos pelo usu�rio. O valor de finaliza��o ser� a entrada do n�mero 0. Observe que 
//nada impede que o usu�rio forne�a quantos n�meros �mpares quiser, com a ressalva de que eles 
//n�o poder�o ser acumulados.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declara��o de vari�veis:
    int i, numero, total;
    float media;
    setlocale(LC_ALL, "portuguese");
//Entrada:
    do {
		printf("%d. Digite um n�mero: ", ++i);
		scanf("%d", &numero);
		if(numero >= 2 && numero % 2 == 0) {
		  media += numero;
			total++;}	
	} while(numero != 0);
media /= total;
//Sa�da:
	printf("\nM�dia dos n�meros pares: %.2f", media);
		
return 0;	
}
