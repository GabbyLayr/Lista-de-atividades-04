//Elabore um algoritmo que escreva o signo do zodíaco correspondente ao dia e mês informado.

#include<stdio.h> 
#include<locale.h> 
#include<string.h> 
#include<ctype.h> 
#include <stdlib.h> 
#include<math.h>

int main(){
//Declaração de variáveis:
    int mes, dia;
    setlocale(LC_ALL, "portuguese");
//Entrada:
    printf("Para saber seu signo do zodíaco nos informe:\n");
    printf("Seu mês de nascimento:\n ");
    printf("\n1. Janeiro\n2. Fevereiro\n3. Março\n4. Abril\n5. Maio\n6. Junho\n");
    printf("7. Julho\n8. Agosto\n9. Setembro\n10. Outubro\n11. Novembro\n12. Dezembro\n");
    printf("\nOpção: ");
    scanf("%d", &mes);
    
    
    switch(mes){
    	case 1: printf("\nDigite seu dia de nascimento: "); 
		        scanf("%d", &dia);
		        if(dia >= 21 && dia <= 31){
		        	printf("Seu signo do zodíaco é: Aquario");
		        	printf("\nAs três características que definem o signo Aquario são:\n");
		        	printf("1. Divertido\n2. Companheiro\n3. Genioso");
				}else{(dia >= 1 && dia <= 20);
		        	printf("Seu signo do zodíaco é: Capricornio");
		        	printf("\nAs três características que definem o signo Capricornio são:\n");
		        	printf("1. Forte\n2. Determinado\n3. Persistente");
		}break;
		
		case 2: printf("\nDigite seu dia de nascimento: "); 
		        scanf("%d", &dia);
		        if(dia >= 1 && dia <= 19){
		        	printf("Seu signo do zodíaco é: Aquario");
		        	printf("\nAs três características que definem o signo  de Aquario são:\n");
		        	printf("1. Divertido\n2. Companheiro\n3. Genioso");
		       }else{(dia >= 20 && dia <= 29);
		            printf("Seu signo do zodíaco é: Peixes");
		        	printf("\nAs três características que definem o signo  de Peixes são:\n");
		        	printf("1. Sonhadores\n2. Talentosos\n3. Carentes");
		    	
		}break;
		
		case 3: printf("\nDigite seu dia de nascimento: "); 
		        scanf("%d", &dia);
		        if(dia >= 1 && dia <= 20){
		        	printf("Seu signo do zodíaco é: Peixes");
		        	printf("\nAs três características que definem o signo  de Peixes são:\n");
		        	printf("1. Sonhadores\n2. Talentosos\n3. Carentes");
				}else{(dia >= 21 && dia <= 31);
				    printf("Seu signo do zodíaco é: Aries");
		        	printf("\nAs três características que definem o signo  de Aries são:\n");
		        	printf("1. Conquistador\n2. Senso de humor\n3. charmoso");  
		}break;
		
		case 4: printf("\nDigite seu dia de nascimento: "); 
		        scanf("%d", &dia);
		        if(dia >= 1 && dia <= 20){
				    printf("Seu signo do zodíaco é: Aries");
		        	printf("\nAs três características que definem o signo  de Aries são:\n");
		        	printf("1. Conquistador\n2. Senso de humor\n3. charmoso");
		        }else{ (dia >= 21 && dia <= 30);
		            printf("Seu signo do zodíaco é: Touro");
		        	printf("\nAs três características que definem o signo  de Touro são:\n");
		        	printf("1. Sereno\n2. Decidido\n3. Paciente");
		}break;
		
		case 5: printf("\nDigite seu dia de nascimento: "); 
		        scanf("%d", &dia);
		        if(dia >= 1 && dia <= 20){
		            printf("Seu signo do zodíaco é: Touro");
		        	printf("\nAs três características que definem o signo  de Touro são:\n");
		        	printf("1. Sereno\n2. Decidido\n3. Paciente");
		        }else{ (dia >= 21 && dia <= 31);
		            printf("Seu signo do zodíaco é: Gêmeos");
		        	printf("\nAs três características que definem o signo  de Gêmeos são:\n");
		        	printf("1. Companheiro\n2. Inteligente\n3. Estável");
		}break;
		
		case 6: printf("\nDigite seu dia de nascimento: "); 
		        scanf("%d", &dia);
		        if(dia >= 1 && dia <= 20){
		            printf("Seu signo do zodíaco é: Gêmeos");
		        	printf("\nAs três características que definem o signo  de Gêmeos são:\n");
		        	printf("1. Companheiro\n2. Inteligente\n3. Estável");
		        }else{ (dia >= 21 && dia <= 30);
		            printf("Seu signo do zodíaco é: Câncer");
		        	printf("\nAs três características que definem o signo  de Câncer são:\n");
		        	printf("1. Sensível\n2. Carinhoso\n3. Emotivo");
		}break;
		
		case 7: printf("\nDigite seu dia de nascimento: "); 
		        scanf("%d", &dia);
		        if(dia >= 1 && dia <= 21){
		            printf("Seu signo do zodíaco é: Câncer");
		        	printf("\nAs três características que definem o signo  de Câncer são:\n");
		        	printf("1. Sensível\n2. Carinhoso\n3. Emotivo");
		        }else{ (dia >= 22 && dia <= 31);
		            printf("Seu signo do zodíaco é: Leão");
		        	printf("\nAs três características que definem o signo  de Leão são:\n");
		        	printf("1. Forte\n2. Livre\n3. Extravagante");
		}break;
		
		case 8: printf("\nDigite seu dia de nascimento: "); 
		        scanf("%d", &dia);
		        if(dia >= 1 && dia <= 21){
		            printf("Seu signo do zodíaco é: Leão");
		        	printf("\nAs três características que definem o signo  de Leão são:\n");
		        	printf("1. Forte\n2. Livre\n3. Extravagante");
		        }else{ (dia >= 23 && dia <= 31);
		            printf("Seu signo do zodíaco é: Virgem");
		        	printf("\nAs três características que definem o signo  de Virgem são:\n");
		        	printf("1. Tímido\n2. Perfeccionista\n3. Observador");
		}break;
		
		case 9: printf("\nDigite seu dia de nascimento: "); 
		        scanf("%d", &dia);
		        if(dia >= 1 && dia <= 22){
		            printf("Seu signo do zodíaco é: Virgem");
		        	printf("\nAs três características que definem o signo  de Virgem são:\n");
		        	printf("1. Tímido\n2. Perfeccionista\n3. Observador");
		        }else{ (dia >= 23 && dia <= 30);
		            printf("Seu signo do zodíaco é: Libra");
		        	printf("\nAs três características que definem o signo  de Libra são:\n");
		        	printf("1. Educado\n2. Geníl\n3. Charmoso");
		}break;
		
		case 10: printf("\nDigite seu dia de nascimento: "); 
		        scanf("%d", &dia);
		        if(dia >= 1 && dia <= 22){
		            printf("Seu signo do zodíaco é: Libra");
		        	printf("\nAs três características que definem o signo  de Libra são:\n");
		        	printf("1. Educado\n2. Geníl\n3. Charmoso");
		        }else{ (dia >= 23 && dia <= 31);
		            printf("Seu signo do zodíaco é: Escorpião");
		        	printf("\nAs três características que definem o signo  de Escorpião são:\n");
		        	printf("1. Genioso\n2. Meticuloso\n3. Teimoso");
		}break;
		
		case 11: printf("\nDigite seu dia de nascimento: "); 
		        scanf("%d", &dia);
		        if(dia >= 1 && dia <= 22){
		            printf("Seu signo do zodíaco é: Escorpião");
		        	printf("\nAs três características que definem o signo  de Escorpião são:\n");
		        	printf("1. Genioso\n2. Meticuloso\n3. Teimoso");
		        }else{ (dia >= 23 && dia <= 30);
		            printf("Seu signo do zodíaco é: Sagitário");
		        	printf("\nAs três características que definem o signo  de Sagitário são:\n");
		        	printf("1. Disciplinado\n2. Alegre\n3. Aventureiro");
				}
		break;
		case 12: printf("\nDigite seu dia de nascimento: "); 
		        scanf("%d", &dia);
		        if(dia >= 1 && dia <= 21){
		            printf("Seu signo do zodíaco é: Sagitário");
		        	printf("\nAs três características que definem o signo  de Sagitário são:\n");
		        	printf("1. Disciplinado\n2. Alegre\n3. Aventureiro");
		        }else{ (dia >= 22 && dia <= 31);
		        	printf("Seu signo do zodíaco é: Capricornio");
		        	printf("\nAs três características que definem o signo Capricornio são:\n");
		        	printf("1. Forte\n2. Determinado\n3. Persistente");
		}break;
}
    printf("\n\nDado retirados do site HORÓSCOPO VIRTUAL: https://m.horoscopovirtual.com.br/artigos/3-caracteristicas-cada-signo");
return 0;	
}
