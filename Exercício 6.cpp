/*
Aluno: Daniel Portela Louren�o
Matr�cula: UC21100134
*/
#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
	
	
	
	setlocale(LC_ALL, "Portuguese");
	
	
	const int inteiros = 5;
	int vetorN[5];
	
	printf("Insira os 5 n�meros inteiros: \n");
	
	for(int i = 0; i < inteiros; ++i){
		scanf("%d", &vetorN[i]);
		
	}
	
	printf("A sequ�ncia de n�meros ao contr�rio �: \n");
	
	for(int i = (inteiros-1); i >= 0 ; --i){
		
		printf("%d ", vetorN[i]);
	}
	    printf("\n");	
	system("pause");
	
	return 0;
}
