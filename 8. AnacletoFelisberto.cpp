//Anacleto tem 1,50 metro e cresce 2 cent�metros por ano, enquanto Felisberto tem 1,10 metro 
//e cresce 3 cent�metros por ano. Construa um algoritmo que calcule e imprima quantos anos ser�o 
//necess�rios para que Felisberto seja maior que Anacleto

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
	
//Declara��o de vari�veis:
    int contador, i;
    float anacleto, felisberto;
    setlocale(LC_ALL, "portuguese");
//Sa�da:
    anacleto = 1.5;
	felisberto = 1.1;
	for(contador = 0; felisberto <= anacleto; contador++){
		anacleto = anacleto + 0.02;
		felisberto = felisberto + 0.03;
		contador++;
		printf("\nEm %d ano:\n", ++i);
		printf(">A altura  de Anacleto sera igual a %.2f\n", anacleto);
		printf(">A altura de Felisberto sera igual a %2.f\n", felisberto);
	}
	printf("\nEm %d Felisberto ser� maior que Anascleto!", contador);
		
return 0;	
}
