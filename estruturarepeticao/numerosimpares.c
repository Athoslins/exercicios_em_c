//Faça um programa que imprima na tela apenas os números ímpares entre 1 e 50.

#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main()
{
	int num;
	for(num=1;num<=50;num= num +2){
		printf("%i\n",num);
	}
			
    return 0;
}