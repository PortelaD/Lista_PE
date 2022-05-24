/*
Aluno: Daniel Portela Lourenço
Matrícula: UC21100134
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void){

	setlocale(LC_CTYPE,"portuguese");
	char palavra[60]; // Um vetor para armazenar a palavra
	char letra; // Um CARACTERE
	int i,j = 0; 

	printf("\nDigite uma letra\n");
	scanf("%c",&letra);

	printf("\nDigite uma palavra\n");
	scanf("%s",palavra); //O nome de um vetor já é uma referência, não vai & antes

	for(i=0; i < strlen(palavra); i++ ) { // aqui no parâmetro do for, usei a função strlen() como limite pro loop
            if(letra == palavra[i]) { // utilizei o for e o if para percorrer cada índice do vetor e comparar as strings
                j++; // o j++ está servindo apenas para contar quantas vezes a letra se repete
            }
        }

    printf("\nA letra %c aparece %d vezes na palavra %s \n", letra ,j ,palavra); 




    system("pause");
	return 0;
}
