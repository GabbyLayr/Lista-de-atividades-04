//Imagine uma brincadeira entre dois colegas, na qual um pensa um número e o outro deve 
//fazer chutes até acertar o número imaginado. Como dica, a cada tentativa é dito se o chute foi alto 
//ou foi baixo. Elabore um algoritmo dentro deste contexto, que leia o número imaginado e os 
//chutes, ao final mostre quantas tentativas foram necessárias para descobrir o número.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
	
//Declaração de variáveis:
    int Nchute, Nchutado, contador;
    setlocale(LC_ALL, "portuguese");
//Entrada:
    printf("Qual é o número que devera ser chutado? ");
    scanf("%d", &Nchute);
system("cls");
do{
contador++;
	printf("Digite o chute: ");
	scanf("%d", &Nchutado);
//Processamento:
	if(Nchutado > Nchute){
	  printf("Tente novamente! Seu chute foi ALTO\n");
	    }else if(Nchutado < Nchute){
		   printf("Tente novamente! Seu chute foi BAIXO\n");
		     }else{
		        printf("\nVocê acertou o número em %d tentativas", contador);}
}while(Nchutado > Nchute || Nchutado < Nchute);
	
return 0;	
}

