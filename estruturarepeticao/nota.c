#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float nota;
	printf("Digite uma nota de 0 a 10:\n");
	scanf("%f", &nota);
	
	while(nota<0 || nota>10){
		printf("Valor invalido\n");
		scanf("%f", &nota);
    }
	return 0;
}