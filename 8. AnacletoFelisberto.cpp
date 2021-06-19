//Anacleto tem 1,50 metro e cresce 2 centímetros por ano, enquanto Felisberto tem 1,10 metro 
//e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão 
//necessários para que Felisberto seja maior que Anacleto

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
	
//Declaração de variáveis:
    int contador, i;
    float anacleto, felisberto;
    setlocale(LC_ALL, "portuguese");
//Saída:
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
	printf("\nEm %d Felisberto será maior que Anascleto!", contador);
		
return 0;	
}
