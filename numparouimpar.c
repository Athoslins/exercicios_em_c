#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Faça um Programa que peça um número inteiro e determine se ele é par ou impar. Dica: utilize o operador módulo (resto da divisão). */

int main(int argc, char *argv[]) {
	
	int numero;
	printf("Digite um numero inteiro:\n");
	scanf("%i", &numero);
	
	if(numero % 2 == 1)
		printf("Numero Impar");
	else
		printf("Numero par");
	
	return 0;
}