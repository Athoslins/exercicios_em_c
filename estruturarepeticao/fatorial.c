#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main()
{
	int num,fatorial,i;
	
	printf("Digite um numero inteiro:");
	scanf("%i", &num);
	
	fatorial=1;
	for(i=num;i>=1;i--){
		fatorial = fatorial*i;		
	}
	printf("O fatorial de %i eh:%i",num,fatorial);

	                                                           
    return 0;
}