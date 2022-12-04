//Faça um programa que receba dois números inteiros 
//e gere os números inteiros que estão no intervalo compreendido por eles.

#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main()
{
	int n1,n2,i,soma=0;
	printf("Digite o primeiro numero:");
	scanf("%i", &n1);
	printf("Digite o segunfo numero:");
	scanf("%i", &n2);
	
	i=1;
	
	for(i=n1;i<=n2;i++)
	{
		printf("%i ", i);
		soma += i;
	}
	printf("\nA soma dos numeros eh: %i", soma);
	                                                            
    return 0;
}