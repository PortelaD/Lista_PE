/*
Aluno: Daniel Portela Lourenço
Matrícula: UC21100134
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int main(){

	char poltronas[6][6];
	int l, c, linha, coluna, menu;
	
	setlocale(LC_ALL,"Portuguese");
	

	for(l=0; l<6; l++){
		for(c=0; c<6; c++){
			poltronas[l][c] = 'D';
		}
	}
	do{
	printf("===================================================================================================================\n=");
	printf("                                  MENU                                                                           =\n=");	
	printf("                         [1]--MAPA DO VÔO                                                                        =\n=");
	printf("                         [2]--ALUGAR ASSENTO                                                                     =\n=");
	printf("                         [3]--COMPRAR ASSENTO                                                                    =\n=");
	printf("                         [4]--FINALIZAR                                                                          =\n=");
	printf("==================================================================================================================");
	printf("\n\nDigite o que deseja: ");
	scanf("%d", &menu);
	if (menu > 4 || menu < 1){
		printf("\nOpção inválida!\n");
		printf("\n");
		system("Pause");
		system("cls");
	}
	
	switch (menu){
		
			case 1:
				printf("\n");	
				system("Pause");
				system("cls");
				printf("0 1 2 3 4 5\n\n");
					for(l=0; l<6; l++){
						for(c=0; c<6; c++){
							printf("%c ", poltronas[l][c]);
						}printf("  %i\n",l);
					}
				printf("\n");	
				system("Pause");
				system("cls");		
			break;
			
			case 2:			
				printf("\n");			
				system("Pause");
				system("cls");
				do{
						printf("0 1 2 3 4 5\n\n");
						for(l=0; l<6; l++){
							for(c=0; c<6; c++){
								printf("%c ", poltronas[l][c]);
							}printf("  %i\n",l);
						}					
	
					printf("\nInforme a linha da poltrona que deseja alugar: ");
					scanf("%i",&linha);
					
						if(linha < 0 || linha > 6){
							printf("\nLinha inválida!\n");
							
							printf("\n");			
							system("Pause");
							system("cls");
							
						}
					
					}while (linha < 0 || linha > 6);
				
				do{
					printf("\nInforme a coluna da poltrona que deseja alugar: ");
					scanf("%i",&coluna);
						if(coluna < 0 || coluna >6){
							printf("\nColuna inválida!\n");
							printf("\n");			
							system("Pause");
							system("cls");
						}
					}while (coluna < 0 || coluna > 6);	
				
				poltronas[linha][coluna] = 'A';
				
				printf("\n");			
				system("Pause");
				system("cls");
			break;
			
			case 3:
				printf("\n");			
				system("Pause");
				system("cls");
				do{
					printf("0 1 2 3 4 5\n\n");
						for(l=0; l<6; l++){
							for(c=0; c<6; c++){
								printf("%c ", poltronas[l][c]);
							}printf("  %i\n",l);
						}
	
					printf("\nInforme a linha da poltrona que deseja comprar: ");
					scanf("%i",&linha);
					
					if(linha < 0 || linha > 6){
						printf("\nLinha inválida!\n");
						printf("\n");			
						system("Pause");
						system("cls");
					}
					
				}while (linha < 0 || linha > 6);
				
				do{
				printf("\nInforme a coluna da poltrona que deseja comprar: ");
				scanf("%i",&coluna);
					if(coluna < 0 || coluna >6){
						printf("\nColuna inválida!\n");
						printf("\n");			
						system("Pause");
						system("cls");
					}
				}while (coluna < 0 || coluna > 6);	
				
				poltronas[linha][coluna] = 'C';
				printf("\n");			
				system("Pause");
				system("cls");
	
			break;	
			
			case 4:
				printf("\n");			
				system("Pause");
				return 0;
	}
	}while(menu != 4);

}
