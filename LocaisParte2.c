#include <stdio.h>
//*****************************
#define OP_UM 1
#define OP_DOIS 2
#define OP_TRES 3
#define OP_QUATRO 4
#define MEDIA
#define AMPLITUDE
#define REDIGITAR
#define ENCERRAR
//*****************************
#ifdef MEDIA
#include "Media.c"
#endif
#ifdef AMPLITUDE
#include "Amplitude.c"
#endif
int main() {
    const int I = 1; const int J = 2;
    int erros = 0, escolhaMenu, i=0, j=0, numDeMatrizes, tamanhoMatriz, ampli1, m4[3][3], m5[3][3], m6[3][3];
    float sm1;
    inicio:
    printf("Defina o numero de matrizes que deseja digitar criar: 1, 2 ou 3\n");
    scanf(" %i", &numDeMatrizes);
    switch (numDeMatrizes) { //A partir da escolha de quantidade de matrizes que usuario desejar cada case inicia uma ação.
        case 1:
            printf("Digite 1 se deseja matrizes 2x2 ou 2 se deseja 3x3:\n");
            scanf(" %i", &tamanhoMatriz);
            if((tamanhoMatriz == I ) || (tamanhoMatriz == J) ) {
                printf("Digite sua matriz:\n");
                for( i = 0; i < (tamanhoMatriz+1); i++) {
                    for( j = 0; j < (tamanhoMatriz+1); j++) {
                        printf("Matriz[%d][%d]", i, j);
                        scanf(" %d", &m4[i][j]);
                    }
                }
            }
            else if (tamanhoMatriz != I || J){
            		puts("opcao invalida");
            		goto inicio;
			}
        break;
        case 2:
            printf("Digite 1 se deseja matrizes 2x2 ou 2 se deseja 3x3:\n");
            scanf(" %i", &tamanhoMatriz);
            if((tamanhoMatriz == I ) || (tamanhoMatriz == J) ) {
                printf("Digite sua matriz:\n");
                for( i = 0; i < (tamanhoMatriz+1); i++) {
                    for( j = 0; j < (tamanhoMatriz+1); j++) {
                        printf("Matriz[%d][%d]", i, j);
                        scanf(" %d", &m4[i][j]);
                    }
                }
            }
            if((tamanhoMatriz == I ) || (tamanhoMatriz == J)) {
                printf("Digite sua matriz:\n");
                for( i = 0; i < (tamanhoMatriz+1); i++) {
                    for( j = 0; j < (tamanhoMatriz+1); j++) {
                        printf("Matriz[%d][%d]", i, j);
                        scanf(" %d", &m5[i][j]);
                    }
                }
            }
            else if (tamanhoMatriz != I || J){
            		puts("opcao invalida");
            		goto inicio;
			}
        break;
        case 3:
            printf("Digite 1 se deseja matrizes 2x2 ou 2 se deseja 3x3:\n");
            scanf(" %i", &tamanhoMatriz);
            if((tamanhoMatriz == I ) || (tamanhoMatriz == J) ) {
                printf("Digite sua matriz:\n");
                for( i = 0; i < (tamanhoMatriz+1); i++) {
                    for( j = 0; j < (tamanhoMatriz+1); j++) {
                        printf("Matriz[%d][%d]", i, j);
                        scanf(" %d", &m4[i][j]);
                    }
                }
            }
            if((tamanhoMatriz == I ) || (tamanhoMatriz == J) ) {
                printf("Digite sua matriz:\n");
                for( i = 0; i < (tamanhoMatriz+1); i++) {
                    for( j = 0; j < (tamanhoMatriz+1); j++) {
                        printf("Matriz[%d][%d]", i, j);
                        scanf(" %d", &m5[i][j]);
                    }
                }
            }
            if((tamanhoMatriz == I ) || (tamanhoMatriz == J)) {
                printf("Digite sua matriz:\n");
                for( i = 0; i < (tamanhoMatriz+1); i++) {
                    for( j = 0; j < (tamanhoMatriz+1); j++) {
                        printf("Matriz[%d][%d]", i, j);
                        scanf(" %d", &m6[i][j]);
                    }
                }
            }
            else if (tamanhoMatriz != I || J){
            		puts("opcao invalida");
            		goto inicio;
			}
        break;
        default: //Caso o usuário digite valores != dos valores permitidos, o programa entra no default que permite ele tentar novamente mais três vezes. Se o erro persistir o programa é encerrado.
        		printf("Opcao Invalida\n");
        		erros++;
        		if(numDeMatrizes > 3) {
            		while (erros < 4) {
                    		goto inicio;
            		}
        		}
        		goto fim;
        		break;
		}
        menu:
    		printf("         \n                      MENU             \n      \n     Escolha uma das opcoes abaixo     \n");
			#ifdef REDIGITAR
    		printf("    | 1- Redigitar os dados das matrizes. |\n");  
			#endif
			#ifdef MEDIA  
			printf("    | 2- Apresentar a media de cada um das series de dados. |\n");
			#endif
			#ifdef AMPLITUDE    
			printf("    | 3- Apresentar a amplitude de cada matriz. |\n");   
			#endif
			#ifdef ENCERRAR
			printf("    | 4- Encerrar. |\n");
			#endif
    		scanf("%d", & escolhaMenu);
    		#ifdef OP_UM
    		if(escolhaMenu == 1){
    			goto inicio;
    		}
    		#endif 
    		#ifdef OP_DOIS
    		else if(escolhaMenu == 2){
            		if(numDeMatrizes == 1){
                		printf(" Media:%.2f\n", Med(tamanhoMatriz, &m4[0][0]));
                		goto menu;
        			}
        			else if(numDeMatrizes == 2){
                			printf(" Media:%.2f\n", Med(tamanhoMatriz, &m4[0][0]));
                			printf(" Media:%.2f\n", Med( tamanhoMatriz, &m5[0][0]));
                			goto menu;
        			}
        			else if(numDeMatrizes == 3){
                			printf(" Media:%.2f\n", Med(tamanhoMatriz, &m4[0][0]));
                			printf(" Media:%.2f\n", Med(tamanhoMatriz, &m5[0][0]));
                			printf(" Media:%.2f\n", Med(tamanhoMatriz, &m6[0][0]));
                			goto menu;
       				}
    		}
    		#endif
    		#ifdef OP_TRES
    		else if(escolhaMenu == 3){
            		if(numDeMatrizes == 1){
                		printf(" Amplitude: %i\n", Maiormenor1(tamanhoMatriz, &m4[0][0]));
                		goto menu;
            		}
        			else if(numDeMatrizes == 2){
                			printf(" Amplitude: %d\n", Maiormenor1( tamanhoMatriz, &m4[0][0]));
                			printf(" Amplitude: %i\n", Maiormenor1( tamanhoMatriz, &m5[0][0]));
                			goto menu;
            		}
        			else if(numDeMatrizes == 3){
                			printf(" Amplitude: %d\n", Maiormenor1( tamanhoMatriz, &m4[0][0]));
                			printf(" Amplitude: %i\n", Maiormenor1( tamanhoMatriz, &m5[0][0]));
                			printf(" Amplitude: %i\n", Maiormenor1( tamanhoMatriz, &m6[0][0]));
                			goto menu;
            		}
    		}
    		#endif
			#ifdef OP_QUATRO
			else if(escolhaMenu == 4){
        			goto fim;
    				fim:
    				return 0;
    		}
    		#endif																		
    		else if(escolhaMenu != 1 && 2 && 3){
            		printf("Opcao Invalida\n");
            		erros++;
            		if(escolhaMenu > 4) {
                		while (erros < 4) {
                        		goto menu;
            			}
        			}
			}
}

