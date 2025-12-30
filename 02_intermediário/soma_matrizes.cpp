/*
* Programa em C/C++
* Soma de valores de uma matriz 3x2
* Conteúdo: matriz, for aninhado
*/

#include <stdio.h>
#include <locale.h>

#define TAM_MAX_LIN 3
#define TAM_MAX_COL 2

int lin, col;
float numeros[TAM_MAX_LIN][TAM_MAX_COL], soma;

int main (){
	setlocale (LC_ALL, "PORTUGUESE");
	soma = 0;
	
	printf ("Entre com os números da matriz 3x2: ");
	
	for (lin = 0; lin < TAM_MAX_LIN; lin++){
		for (col = 0; col < TAM_MAX_COL; col++){
			printf ("\nlinha %i coluna %i:", lin + 1, col + 1);
			scanf ("%f", &numeros[lin][col]);	
			soma += numeros[lin][col];		
		}
	}
	printf ("\nA soma de todos os valores dentro das matrizes é de: %.2f", soma);
	return 0;
}
