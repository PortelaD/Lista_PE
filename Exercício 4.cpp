/*
Aluno: Daniel Portela Lourenço
Matrícula: UC21100134
*/
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

// procedimento que converte uma string para maiúsculo
void maiusculo(char str1[], char str2[]){
    int i = 0;
    while(str1[i] != '\0'){
        str2[i] = toupper(str1[i]);
        i++;
    }
    str2[i] = '\0'; // caracteer que indica o fim da string
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	char string[20];
	char str2[50];
	int elementos;
	printf("Digite aqui:\n ");
	fgets(string, 30, stdin);
	fflush(stdin);
	elementos= strlen(string)-1;
	fflush(stdin);
	printf("Essa string tem %d elementos\n", elementos);
    maiusculo(string, str2);
    printf("String maiuscula:\n%s", str2);
	
 return 0;	
}
