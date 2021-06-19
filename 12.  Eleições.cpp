//Em uma eleição presidencial existem quatro candidatos. Os votos são informados por código. 
//Os dados utilizados para a ação obedecem à seguinte codificação:
//• 1, 2, 3, 4 = voto para os respectivos candidatos;
//• 5 = voto nulo;
//• 6 = voto em branco.
//Elabore um algoritmo que calcule e escreva:
//• O total de votos para cada candidato e seu percentual sobre o total;
//• O total de votos nulos e seu percentual sobre o total;
//• O total de votos em branco e seu percentual sobre o total.
//Como finalizador do conjunto de votos, tem-se o valor 0

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declaração de variáveis:
    int i = 0, voto, candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0, nulo = 0, branco = 0;
    double PCandidato1, PCandidato2, PCandidato3, PCandidato4, PNulo, PBranco, totalVotos;
    setlocale(LC_ALL, "portuguese");
//Entrada:
    printf("--Sistema Eleitoral--");
do{
	printf("\n%d. Para realiza seu voto selecione uma opção:\n", ++i);
	printf("1. Voto para o candidato 1\n2. Voto para o candidato 2\n3. Voto para o candidato 3\n4. Voto para o candidato 4");
	printf("5. Para voto nulo\n6. Para voto em branco\n0. Para encerrar os votos");
	printf("\nOpção: ");
	scanf("%d", &voto);
	if(voto == 1){
	  candidato1++;
	    }else if (voto == 2){
		   candidato2++;
	         }else if (voto == 3){
		        candidato3;
	              }else if (voto == 4){
	                 candidato4++;
	                   }else if (voto == 5){
		                 nulo++;
	                       }else{
		                      branco++;}
}while(voto != 0);
//Processamento:
   totalVotos = candidato1 + candidato2 + candidato3 + candidato4 + nulo + branco;
   PCandidato1 = candidato1 / totalVotos;
   PCandidato2 = candidato2 / totalVotos;
   PCandidato3 = candidato3 / totalVotos;
   PCandidato4 = candidato4 / totalVotos;
   PNulo = nulo / totalVotos;
   PBranco = branco / totalVotos;
//Saída:
	printf("Resultados da eleição:\n");
	printf(">Candidato 1: %d votos\n", candidato1);
	printf(" Seu percentual de votos é: %.2lf", PCandidato1*100);
	printf("\n>Candidato 2: %d votos\n", candidato2);
	printf(" Seu percentual de votos é: %.2lf", PCandidato2*100);
	printf("\n>Candidato 3: %d votos\n", candidato3);
	printf(" Seu percentual de votos é: %.2lf", PCandidato3*100);
	printf("\n>Candidato 4: %d votos\n", candidato4);
	printf(" Seu percentual de votos é: %.2lf", PCandidato4*100);
	printf("\n\nVotos Nulos Total: %d", nulo);
	printf("\nPercentual: %.2lf", PNulo*100);
	printf("\nVotos Branco Total: %d", branco);
	printf("\nPercentual: %.2lf", PBranco*100);
	
return 0;	
}
