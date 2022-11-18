#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Faça um programa que pergunte o preço de três produtos e informe qual produto  , sabendo que a decisão é sempre pelo mais barato. */

int main(){
	
	float p1,p2,p3;
	printf("Digite o preco do primeiro produto:");
	scanf("%f", &p1);
	printf("Digite o preco do segundo produto:");
	scanf("%f", &p2);
	printf("Digite o preco do terceiro produto:");
	scanf("%f", &p3);
	
	if(p1<p2 && p1<p3)
		printf("Voce deve comprar o produto de valor:R$%.2f", p1);
	else if(p2<p1 && p2<p3)
		printf("Voce deve comprar o produto de valor:R$%.2f", p2);
	else if(p3<p2 && p3<p1)
		printf("Voce deve comprar o produto de valor:R$%.2f", p3);
		
	
		
	return 0;
}