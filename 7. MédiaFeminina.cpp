//Construa um algoritmo que leia um conjunto de dados contendo altura e sexo (�M� para 
//masculino e �F� para feminino) de 50 pessoas e, depois, calcule e escreva:
//A maior e a menor altura do grupo;
//A m�dia de altura das mulheres;

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
	
//Declara��o de vari�veis:
    int altura, alturaM, mulheres, menorAltura, maiorAltura, media, contador;
    char sexo;
    setlocale(LC_ALL, "portuguese");
//Entrada:
    for(contador = 0; contador <= 2; contador++){
    	printf("\nDigite a altura: ");
    	scanf("%d", &altura);
    	printf("Digite o sexo (F ou M): ");
    	scanf("%s", &sexo);
    	sexo = toupper(sexo);
    	
    	if(contador == 1){
			menorAltura = altura;
				maiorAltura = altura;}
		if(menorAltura > altura){
			menorAltura = altura;
			  }else{(maiorAltura < altura);
			     maiorAltura = altura;}
		if(sexo == 'F'){
			alturaM  = alturaM + altura;
				mulheres++;}
        contador++;
}

    media = alturaM/mulheres;
//Sa�da:
	printf("\nA maior altura informada �: %d", maiorAltura);
	printf("\nA menor altura informada �: %d\n", menorAltura);
	printf("\nM�dia das mulheres: %d", media);
	
	
	
	
	
	
return 0;	
}
