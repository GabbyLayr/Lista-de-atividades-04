// Elabore um algoritmo que, a partir de um dia, m�s e ano fornecidos, valide se eles comp�em 
//uma data v�lida. N�o deixe de considerar os meses com 30 ou 31 dias, e o tratamento de ano bissexto.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
	
//Declara��o de vari�veis:
    int dia, mes, ano;
    setlocale(LC_ALL, "portuguese");
//Entrada:
    printf("Digite o DIA(Dd): ");
    scanf("%d", &dia);
    printf("Digite o M�S: ");
    scanf("%d", &mes);
    printf("Digite o ANO: ");
    scanf("%d", &ano);
    if(dia >= 1 && dia <= 31){
    	printf("Data v�lida!");
	      }else{ (dia <= 0 && dia >= 32);
	         printf("\nData inv�lida!");}
	if(mes >= 1 && mes <= 12){
    	printf("\nM�s v�lido!");
	      }else{ (mes <= 0 && mes >= 13);
	         printf("\nM�s inv�lido!");}
	if(ano >= 2022){
	    printf("\nAno inv�lido!");
		  }else{
		  	printf("\nAno v�lido!");} 
	if(dia >= 1 && dia <= 31 && mes >= 1 && mes <= 12 && ano <= 2021){
		printf("\nA data informada %d/%d/%d � valida!", dia, mes, ano);
	}else{
		printf("\nA data informada %d/%d/%d � inv�lida!", dia, mes, ano);}
    	
return 0;	
}
