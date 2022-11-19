#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Faça um Programa que leia um número e exiba o dia correspondente da semana. (1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido.*/

int main(){
	
	int n;
	printf("Digite um numero de 1 a 7:");
	scanf("%i", &n);
	
	if(n==1)
		printf("Domingo");
	else if(n==2)
		printf("Segunda-feira");
	else if(n==3)
		printf("Terca-feira");
	else if(n==4)
		printf("Quarta-feira");
	else if(n==5)
		printf("Quinta-feira");
	else if(n==6)
		printf("Sexta-feira");
	else if(n==7)
		printf("Sabado");
	else
		printf("Valor invalido");
	
	return 0;
}
