//Elabore um algoritmo que escreva o signo do zod�aco correspondente ao dia e m�s informado.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declara��o de vari�veis:
    int mes, dia;
    setlocale(LC_ALL, "portuguese");
//Entrada:
    printf("Para saber seu signo do zod�aco nos informe:\n");
    printf("Seu m�s de nascimento:\n ");
    printf("\n1. Janeiro\n2. Fevereiro\n3. Mar�o\n4. Abril\n5. Maio\n6. Junho\n");
    printf("7. Julho\n8. Agosto\n9. Setembro\n10. Outubro\n11. Novembro\n12. Dezembro\n");
    printf("\nOp��o: ");
    scanf("%d", &mes);
    
    
    switch(mes){
    	case 1: printf("\nDigite seu dia de nascimento: "); 
		        scanf("%d", &dia);
		        if(dia >= 21 && dia <= 31){
		        	printf("Seu signo do zod�aco �: Aquario");
		        	printf("\nAs tr�s caracter�sticas que definem o signo Aquario s�o:\n");
		        	printf("1. Divertido\n2. Companheiro\n3. Genioso");
				}else{(dia >= 1 && dia <= 20);
		        	printf("Seu signo do zod�aco �: Capricornio");
		        	printf("\nAs tr�s caracter�sticas que definem o signo Capricornio s�o:\n");
		        	printf("1. Forte\n2. Determinado\n3. Persistente");
		}break;
		
		case 2: printf("\nDigite seu dia de nascimento: "); 
		        scanf("%d", &dia);
		        if(dia >= 1 && dia <= 19){
		        	printf("Seu signo do zod�aco �: Aquario");
		        	printf("\nAs tr�s caracter�sticas que definem o signo  de Aquario s�o:\n");
		        	printf("1. Divertido\n2. Companheiro\n3. Genioso");
		       }else{(dia >= 20 && dia <= 29);
		            printf("Seu signo do zod�aco �: Peixes");
		        	printf("\nAs tr�s caracter�sticas que definem o signo  de Peixes s�o:\n");
		        	printf("1. Sonhadores\n2. Talentosos\n3. Carentes");
		    	
		}break;
		
		case 3: printf("\nDigite seu dia de nascimento: "); 
		        scanf("%d", &dia);
		        if(dia >= 1 && dia <= 20){
		        	printf("Seu signo do zod�aco �: Peixes");
		        	printf("\nAs tr�s caracter�sticas que definem o signo  de Peixes s�o:\n");
		        	printf("1. Sonhadores\n2. Talentosos\n3. Carentes");
				}else{(dia >= 21 && dia <= 31);
				    printf("Seu signo do zod�aco �: Aries");
		        	printf("\nAs tr�s caracter�sticas que definem o signo  de Aries s�o:\n");
		        	printf("1. Conquistador\n2. Senso de humor\n3. charmoso");  
		}break;
		
		case 4: printf("\nDigite seu dia de nascimento: "); 
		        scanf("%d", &dia);
		        if(dia >= 1 && dia <= 20){
				    printf("Seu signo do zod�aco �: Aries");
		        	printf("\nAs tr�s caracter�sticas que definem o signo  de Aries s�o:\n");
		        	printf("1. Conquistador\n2. Senso de humor\n3. charmoso");
		        }else{ (dia >= 21 && dia <= 30);
		            printf("Seu signo do zod�aco �: Touro");
		        	printf("\nAs tr�s caracter�sticas que definem o signo  de Touro s�o:\n");
		        	printf("1. Sereno\n2. Decidido\n3. Paciente");
		}break;
		
		case 5: printf("\nDigite seu dia de nascimento: "); 
		        scanf("%d", &dia);
		        if(dia >= 1 && dia <= 20){
		            printf("Seu signo do zod�aco �: Touro");
		        	printf("\nAs tr�s caracter�sticas que definem o signo  de Touro s�o:\n");
		        	printf("1. Sereno\n2. Decidido\n3. Paciente");
		        }else{ (dia >= 21 && dia <= 31);
		            printf("Seu signo do zod�aco �: G�meos");
		        	printf("\nAs tr�s caracter�sticas que definem o signo  de G�meos s�o:\n");
		        	printf("1. Companheiro\n2. Inteligente\n3. Est�vel");
		}break;
		
		case 6: printf("\nDigite seu dia de nascimento: "); 
		        scanf("%d", &dia);
		        if(dia >= 1 && dia <= 20){
		            printf("Seu signo do zod�aco �: G�meos");
		        	printf("\nAs tr�s caracter�sticas que definem o signo  de G�meos s�o:\n");
		        	printf("1. Companheiro\n2. Inteligente\n3. Est�vel");
		        }else{ (dia >= 21 && dia <= 30);
		            printf("Seu signo do zod�aco �: C�ncer");
		        	printf("\nAs tr�s caracter�sticas que definem o signo  de C�ncer s�o:\n");
		        	printf("1. Sens�vel\n2. Carinhoso\n3. Emotivo");
		}break;
		
		case 7: printf("\nDigite seu dia de nascimento: "); 
		        scanf("%d", &dia);
		        if(dia >= 1 && dia <= 21){
		            printf("Seu signo do zod�aco �: C�ncer");
		        	printf("\nAs tr�s caracter�sticas que definem o signo  de C�ncer s�o:\n");
		        	printf("1. Sens�vel\n2. Carinhoso\n3. Emotivo");
		        }else{ (dia >= 22 && dia <= 31);
		            printf("Seu signo do zod�aco �: Le�o");
		        	printf("\nAs tr�s caracter�sticas que definem o signo  de Le�o s�o:\n");
		        	printf("1. Forte\n2. Livre\n3. Extravagante");
		}break;
		
		case 8: printf("\nDigite seu dia de nascimento: "); 
		        scanf("%d", &dia);
		        if(dia >= 1 && dia <= 21){
		            printf("Seu signo do zod�aco �: Le�o");
		        	printf("\nAs tr�s caracter�sticas que definem o signo  de Le�o s�o:\n");
		        	printf("1. Forte\n2. Livre\n3. Extravagante");
		        }else{ (dia >= 23 && dia <= 31);
		            printf("Seu signo do zod�aco �: Virgem");
		        	printf("\nAs tr�s caracter�sticas que definem o signo  de Virgem s�o:\n");
		        	printf("1. T�mido\n2. Perfeccionista\n3. Observador");
		}break;
		
		case 9: printf("\nDigite seu dia de nascimento: "); 
		        scanf("%d", &dia);
		        if(dia >= 1 && dia <= 22){
		            printf("Seu signo do zod�aco �: Virgem");
		        	printf("\nAs tr�s caracter�sticas que definem o signo  de Virgem s�o:\n");
		        	printf("1. T�mido\n2. Perfeccionista\n3. Observador");
		        }else{ (dia >= 23 && dia <= 30);
		            printf("Seu signo do zod�aco �: Libra");
		        	printf("\nAs tr�s caracter�sticas que definem o signo  de Libra s�o:\n");
		        	printf("1. Educado\n2. Gen�l\n3. Charmoso");
		}break;
		
		case 10: printf("\nDigite seu dia de nascimento: "); 
		        scanf("%d", &dia);
		        if(dia >= 1 && dia <= 22){
		            printf("Seu signo do zod�aco �: Libra");
		        	printf("\nAs tr�s caracter�sticas que definem o signo  de Libra s�o:\n");
		        	printf("1. Educado\n2. Gen�l\n3. Charmoso");
		        }else{ (dia >= 23 && dia <= 31);
		            printf("Seu signo do zod�aco �: Escorpi�o");
		        	printf("\nAs tr�s caracter�sticas que definem o signo  de Escorpi�o s�o:\n");
		        	printf("1. Genioso\n2. Meticuloso\n3. Teimoso");
		}break;
		
		case 11: printf("\nDigite seu dia de nascimento: "); 
		        scanf("%d", &dia);
		        if(dia >= 1 && dia <= 22){
		            printf("Seu signo do zod�aco �: Escorpi�o");
		        	printf("\nAs tr�s caracter�sticas que definem o signo  de Escorpi�o s�o:\n");
		        	printf("1. Genioso\n2. Meticuloso\n3. Teimoso");
		        }else{ (dia >= 23 && dia <= 30);
		            printf("Seu signo do zod�aco �: Sagit�rio");
		        	printf("\nAs tr�s caracter�sticas que definem o signo  de Sagit�rio s�o:\n");
		        	printf("1. Disciplinado\n2. Alegre\n3. Aventureiro");
				}
		break;
		case 12: printf("\nDigite seu dia de nascimento: "); 
		        scanf("%d", &dia);
		        if(dia >= 1 && dia <= 21){
		            printf("Seu signo do zod�aco �: Sagit�rio");
		        	printf("\nAs tr�s caracter�sticas que definem o signo  de Sagit�rio s�o:\n");
		        	printf("1. Disciplinado\n2. Alegre\n3. Aventureiro");
		        }else{ (dia >= 22 && dia <= 31);
		        	printf("Seu signo do zod�aco �: Capricornio");
		        	printf("\nAs tr�s caracter�sticas que definem o signo Capricornio s�o:\n");
		        	printf("1. Forte\n2. Determinado\n3. Persistente");
		}break;
}
    printf("\n\nDado retirados do site HOR�SCOPO VIRTUAL: https://m.horoscopovirtual.com.br/artigos/3-caracteristicas-cada-signo");
return 0;	
}
