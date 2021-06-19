//Construa um algoritmo que apresente os 20 primeiros termos da série de Fibonacci.
// F(n + 2) = F(n + 1) + F(n) , com n = 1 e F(1) = F(2) = 1

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declaração de variáveis:
    int numero1 = 0, numero2 = 1, soma, contador, i;
    setlocale( LC_ALL, "portuguese");
//Saída
    for(contador = 0; contador <= 20; contador++){
		soma = numero1 + numero2;
		numero1 = numero2;
		numero2 = soma;
		printf("%d\n", soma);
	}
	
return 0;	
}
