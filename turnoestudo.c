#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Faça um Programa que pergunte em que turno você estuda. Peça para digitar M-matutino ou V-Vespertino ou N- Noturno.

Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso. */

int main(){
	
	char turno;
	printf("Qual turno voce estuda? Digite M para matutino, V para vespertino ou N para noturno.\n");
    scanf("%c", &turno);
	
	if(turno == 'M' || turno == 'm')
		printf("Bom Dia!");
	else if(turno == 'V' || turno=='v')
		printf("Boa Tarde!");
	else if(turno == 'n' || turno == 'N')
		printf("Boa Noite!");
	else
		printf("Valor invalido!");
	
	
	return 0;
}