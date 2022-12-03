#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Faça um Programa que peça dois números e imprima a soma.

int main(int argc, char *argv[]) {
	
	float n1,n2,res;
	printf("Digite o primeiro numero:");
	scanf("%f", &n1);
	printf("Digite o segundo numero:");
	scanf("%f", &n2);
	
	res=n1+n2;
	printf("A soma dos dois numeros: %.2f", res);
	
	return 0;
}