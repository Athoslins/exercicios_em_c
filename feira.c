#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float klmorango,klmaca, valormorango,valormaca, kl_total, valor_total;
	printf("Quantos quilos de morango?");
	scanf("%f", &klmorango);
	printf("Quantos quilos de maca?");
	scanf("%f", &klmaca);
	
	if(klmorango<=5)
		valormorango = 2.50 * klmorango;
	else
		valormorango = 2.20 * klmorango;
	
	if(klmaca<=5)
		valormaca = 1.80 * klmaca;
	else
		valormaca = 1.50 * klmaca;
	
	kl_total = klmorango + klmaca;
	valor_total = valormorango + valormaca;
	
	if(kl_total>8 || valor_total >25)
		valor_total = valor_total -((valor_total*10)/100);
	else
		valor_total = valor_total;
	
	
	printf("Valor a ser pago: R$%.2f", valor_total);
		
		
	
	return 0;
}