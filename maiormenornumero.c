#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Faça um Programa que leia três números e mostre o maior e o menor deles. */

int main(){
	
	int n1,n2,n3;
	printf("Digite o primeiro numero:");
	scanf("%i", &n1);
	printf("Digite o segundo numero:");
	scanf("%i", &n2);
	printf("Digite o terceiro numero:");
	scanf("%i", &n3);
	
	if(n1>n2 && n1>n3)
		printf("Maior numero:%i", n1);
	else if( n2>n3 && n2>n1)
		printf("Maior numero:%i", n2);
	else if(n3>n2 && n3>n1)
		printf("Maior numero:%i", n3);
		
	if(n1<n2 && n1<n3)
		printf("\nMenor numero:%i", n1);
	else if(n2<n3 && n2<n1)
		printf("\nMenor numero:%i", n2);
	else if(n3<n2 && n3<n1)
		printf("\nMenor numero:%i", n3);
		
	return 0;
}