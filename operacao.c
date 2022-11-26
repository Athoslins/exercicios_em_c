#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Faça um Programa que leia 2 números e em seguida pergunte ao usuário qual operação ele deseja realizar.

O resultado da operação deve ser acompanhado de uma frase que diga se o número é: par ou ímpar; positivo ou negativo; inteiro ou decimal.*/

int main(int argc, char *argv[]) {
	
	float num1,num2,res;
	int op;
	printf("Digite o primeiro numero:");
	scanf("%f", &num1);
	printf("Digite o segundo numero:");
	scanf("%f", &num2);
	printf("Qual operacao deseja realizar?\nDigite 1 para adicao\nDigite 2 para subtraçao\nDigite 3 para multiplicaçao\nDigite 4 para divisao\n");
	scanf("%i", &op);
	
	if(op == 1)
		res = num1 + num2;
	else if(op == 2)
		res = num1 - num2;
	else if(op==3)
		res = num1 * num2;
	else if(op==4)
		res= num1 / num2;
	
	printf("O resultado:%.1f", res);
		
	if(res/2 == 0)
		printf("numeropar");
	else
		printf("\nnumero impar");
	if (res<0)
		printf("\nnumero negativo");
	else
		printf("\nnumero positivo");
	if(floor(res) == res)
		printf("\nnumero inteiro");
	else
		printf("\nnumero decimal");

	

	return 0;
}