#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Faça um Programa que leia três números e mostre-os em ordem decrescente. */

int main(){
	
	int n1,n2,n3;
	printf("Digite tres numeros inteiros:\n");
	scanf("%i %i %i", &n1,&n2,&n3);
	
	if(n1>n2 && n2>n3)
		printf("%i %i %i", n1,n2,n3);
	else if(n2>n1 && n1>n3)
		printf("%i %i %i", n2,n1,n3);
	else if(n3>n1 && n1>n2)
		printf("%i %i %i", n3,n1,n2);
	else if(n1>n3 && n3>n2)
		printf("%i %i %i", n1,n3,n2);
	else if(n2>n3 && n3>n1)
		printf("%i %i %i", n2,n3,n1);
	else
		printf("%i %i %i", n3,n2,n1);
	
	
	return 0;
}