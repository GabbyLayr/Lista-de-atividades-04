//Construa um algoritmo que permita fazer um levantamento do estoque de vinhos de uma 
//adega, tendo como dados de entrada tipos de vinho, sendo: �T� para tinto, �B� para branco e �R� para ros�. Especifique a porcentagem de cada tipo sobre o total geral de vinhos; a quantidade de 
//vinhos � desconhecida, utilize como finalizador �F� de fim.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declara��o de vari�veis:
    int vinhosTinto = 0, vinhosBranco = 0, vinhosRose = 0, i = 0;
    double vinhosTotal, PTinto, PBranco, PRose, tintos, brancos, roses;
    char opcao;
    setlocale(LC_ALL, "portuguese");
//Entrada:
    printf("--Estoque da Adega--\n");
do{
	printf("\n%d. Digite a letra de acordo com o tipo de vinho sendo:\n", ++i);
	printf("\nT. Vinho Tinto\nB. Vinho Branco\nR. Vinho Ros�\nF. Encerrar Sess�o e ver seus resultador");
	printf("\nOp��o: ");
	scanf("%s", &opcao);
	opcao = toupper(opcao);
//Processamento:
	if (opcao == 'T'){
	  vinhosTinto++;
	    }else if (opcao == 'B'){
	       vinhosBranco++;
		     }else{ (opcao == 'R');
		        vinhosRose++;}	
}while(opcao != 'F');
    vinhosTotal = vinhosTinto + vinhosBranco + vinhosRose;
    PTinto = vinhosTinto/(vinhosTotal);
	PBranco = vinhosBranco/(vinhosTotal);
	PRose = vinhosRose/(vinhosTotal);
//Sa�da:
    printf("\nO seu estoque � composto por:\n");
	printf("%.2lf porcento de vinhos TINTOS\n", PTinto*100);
	printf("%.2lf porcento de vinhos BRANCOS\n", PBranco*100);
	printf("%.2lf porcento de vinhos ROSE\n", PRose*100);
		
return 0;	
}

