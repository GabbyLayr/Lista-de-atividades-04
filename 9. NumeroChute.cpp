//Imagine uma brincadeira entre dois colegas, na qual um pensa um n�mero e o outro deve 
//fazer chutes at� acertar o n�mero imaginado. Como dica, a cada tentativa � dito se o chute foi alto 
//ou foi baixo. Elabore um algoritmo dentro deste contexto, que leia o n�mero imaginado e os 
//chutes, ao final mostre quantas tentativas foram necess�rias para descobrir o n�mero.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
	
//Declara��o de vari�veis:
    int Nchute, Nchutado, contador;
    setlocale(LC_ALL, "portuguese");
//Entrada:
    printf("Qual � o n�mero que devera ser chutado? ");
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
		        printf("\nVoc� acertou o n�mero em %d tentativas", contador);}
}while(Nchutado > Nchute || Nchutado < Nchute);
	
return 0;	
}

