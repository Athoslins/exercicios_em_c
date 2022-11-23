#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Faça um Programa para um caixa eletrônico.

O programa deverá perguntar ao usuário a valor do saque e depois informar quantas notas de cada valor serão fornecidas.

As notas disponíveis serão as de 1, 5, 10, 50 e 100 reais. O valor mínimo é de 10 reais e o máximo de 600 reais.

O programa não deve se preocupar com a quantidade de notas existentes na máquina.

Exemplo 1: Para sacar a quantia de 256 reais, o programa fornece duas notas de 100, uma nota de 50, uma nota de 5 e uma nota de 1;

Exemplo 2: Para sacar a quantia de 399 reais, o programa fornece três notas de 100, uma nota de 50, quatro notas de 10, uma nota de 5 e quatro notas de 1. */

int main(int argc, char *argv[]) {
	
	int valor, cem, ciquenta, dez, cinco, um;
	
	printf("Digite a valor a ser sacado: (minimo 10, maximo 600)\n");
	scanf("%i", &valor);
	
	if(valor < 10 || valor >600){
		printf("Valor invalido");
	}
	else{
		cem = valor/100;
		valor -= cem * 100;
		ciquenta = valor/50;
		valor -= ciquenta * 50;
		dez = valor/10;
		valor -= dez * 10;
		cinco = valor/5;
		valor -= cinco * 5;
		um = valor;
		
		if(cem>0)
			printf("\n%i notas de cem", cem);
		if(ciquenta>0)
			printf("\n%i notas de ciquenta", ciquenta);
		if(dez>0)
			printf("\n%i notas de dez", dez);
		if(cinco>0)
			printf("\n%i notas de cinco", cinco);
		if(um>1)
			printf("\n%i notas de um", um);	
		
	}
	
	return 0;
}