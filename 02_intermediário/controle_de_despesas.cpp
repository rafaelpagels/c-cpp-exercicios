/*
* Programa em C/C++
* Calculo de despesas durante um mês
* Conteúdo: matriz, for aninhado, if-else
*/

#include <stdio.h>
#include <locale.h>

#define TAM_MAX_LIN 30
#define TAM_MAX_COL 2

int lin, col;
float calendario[TAM_MAX_LIN][TAM_MAX_COL], entrada, saida;

int main (){
	setlocale (LC_ALL, "PORTUGUESE");
	
	entrada = 0;
	saida = 0;
		
	printf ("Calculo de despesas.\n");
	printf ("Considere:\n");
	printf ("linha - dias\n");
	printf ("coluna - entradas | despesas\n");
	
	for (lin = 0; lin < TAM_MAX_LIN; lin++){
		for (col = 0; col < TAM_MAX_COL; col++){
			
			if (col == 0){
			printf ("\nEntre com a receita do dia %i: ", lin + 1);
			scanf ("%f", &calendario[lin][col]);
			entrada += calendario[lin][col];
			}
			
			if (col == 1){
			printf ("\n  Entre com a saída do dia %i: ", lin + 1);
			scanf ("%f", &calendario[lin][col]);
			saida += calendario[lin][col];
			}				
		}
		printf ("\n---------------------------------------\n");
		printf ("\n| SALDO ATUAL: %.2f |\n", entrada - saida);
		printf ("\n---------------------------------------\n");
	}
	printf ("\nO mês atual está com o saldo de: %.2f", entrada - saida);
	
	if (entrada > saida){
		printf ("\nNeste mês, houve mais entradas do que saídas. Excelente!");
		printf ("\nEntradas: %.2f\t", entrada);
		printf ("\nSaídas: %.2f\t", saida);
	} else {
		printf ("\nNeste mês, houve mais saídas do que entradas. Alerta vermelho!");
		printf ("\nEntradas: %.2f\t", entrada);
		printf ("\nSaídas: %.2f\t", saida);
	}
	return 0;	
}
