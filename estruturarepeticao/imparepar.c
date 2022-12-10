#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main()
{
	int pares=0,impares=0,numero,i;
	for(i=1;i<=10;i++){
		printf("\nDigite um numero:");
		scanf("%i", &numero);
		if(numero%2==0)
			pares++;
		else
			impares++;
	}
	printf("Pares:%i\nImpares:%i", pares,impares);

	                                                           
    return 0;
}