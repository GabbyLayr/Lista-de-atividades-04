//Construa um algoritmo que seja capaz de dar a classifica��o ol�mpica de 3 pa�ses informados. 
//Para cada pa�s � informado o nome, a quantidade de medalhas de ouro, prata e bronze. Considere 
//que cada medalha de ouro tem peso 3, cada prata tem peso 2 e cada bronze, peso 1.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h> 

int main(){
//Declara��o de vari�veis:
    int ouro, prata, bronze, resultadoOuro, resultadoPrata, resultadoBronze, total;
    char pais[20], contador, i;
    setlocale(LC_ALL, "portuguese");
//Entrada:
    for(contador = 0; contador <= 3; contador++){
    printf("\nDigite o nome do %d� pa�s: ", ++i);
    scanf("%s", &pais);
    printf("Quantas medalhas de ouro o pa�s recebeu? ");
    scanf("%d", &ouro);
    printf("Quantas medalhas de prata o pa�s recebeu? ");
    scanf("%d", &prata);
    printf("Quantas medalhas de bronze o pa�s recebeu? ");
    scanf("%d", &bronze);
    
    ouro = (ouro * 3);
    prata = (prata * 2);
    bronze = (bronze * 1);
    total = ouro + prata + bronze;
    
    printf("\nO pa�s possui um total de pontos = %d\n", total);
	}	
return 0;	
}
