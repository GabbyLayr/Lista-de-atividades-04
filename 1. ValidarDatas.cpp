// Elabore um algoritmo que, a partir de um dia, mês e ano fornecidos, valide se eles compõem 
//uma data válida. Não deixe de considerar os meses com 30 ou 31 dias, e o tratamento de ano bissexto.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
	
//Declaração de variáveis:
    int dia, mes, ano;
    setlocale(LC_ALL, "portuguese");
//Entrada:
    printf("Digite o DIA(Dd): ");
    scanf("%d", &dia);
    printf("Digite o MÊS: ");
    scanf("%d", &mes);
    printf("Digite o ANO: ");
    scanf("%d", &ano);
    if(dia >= 1 && dia <= 31){
    	printf("Data válida!");
	      }else{ (dia <= 0 && dia >= 32);
	         printf("\nData inválida!");}
	if(mes >= 1 && mes <= 12){
    	printf("\nMês válido!");
	      }else{ (mes <= 0 && mes >= 13);
	         printf("\nMês inválido!");}
	if(ano >= 2022){
	    printf("\nAno inválido!");
		  }else{
		  	printf("\nAno válido!");} 
	if(dia >= 1 && dia <= 31 && mes >= 1 && mes <= 12 && ano <= 2021){
		printf("\nA data informada %d/%d/%d é valida!", dia, mes, ano);
	}else{
		printf("\nA data informada %d/%d/%d é inválida!", dia, mes, ano);}
    	
return 0;	
}
