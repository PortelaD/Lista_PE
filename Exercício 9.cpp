/*
Aluno: Daniel Portela Lourenço
Matrícula: UC21100134
*/
#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
    int auxiliar,numero, soma;
    
    soma=0;
    
    for(auxiliar=1;auxiliar<=10;auxiliar++){
    printf("Informe o número %d:\n", auxiliar);
    scanf("%d", &numero);
    soma= soma+numero;	
	}
	
	printf("Soma Final: %d\n", soma);
	
	return 0;
}
