//Escreva um algoritmo que imprima todas as possibilidades de que o lan�amento de dois dados 
//tenhamos o valor 7 como resultado da soma dos valores de cada dado.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
	
//Declara��o de vari�veis:
    int possibilidades, D1, D2, i;
    setlocale(LC_ALL, "portuguese");
//Sa�da:
    printf("A possibilidade da soma dos dois dados lan�ados ser igual a 7 � igual a 6:\n");
    
    for(D1 = 1; D1 <= 6; D1++){
		for(D2 = 1; D2 <= 6 ; D2++){
		    if(D1 + D2==7){
			    possibilidades = D1 + D2;
			      printf("%d. %d + %d = %d\n",++i, D1, D2, possibilidades);}
		}
	}
	
return 0;	
}
