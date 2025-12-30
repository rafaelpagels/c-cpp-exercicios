/* 
* Programa em C/C++
* Pede ao usuário um número para calcular o fatorial
* Conteúdo: laço for, entrada de dados
*/

#include <stdio.h>
#include <locale.h>

int contador, nmr;
int fatorial = 1;

int main (){
	setlocale (LC_ALL, "PORTUGUESE");
	
	printf ("Digite um número inteiro maior ou igual a 0: ");
	scanf ("%d", &nmr);
	
		if (nmr < 0) {
   			 printf("Não existe fatorial de número negativo.\n");
    		return 0;
		}

		for (contador = 1; contador <= nmr; contador++){
			fatorial = fatorial * contador;
		}

	printf ("O fatorial de %d é %d\n", nmr, fatorial);
	return 0;
}
