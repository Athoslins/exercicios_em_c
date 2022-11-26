#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são:
 "Telefonou para a vítima?" 
"Esteve no local do crime?"
 "Mora perto da vítima?" 
 "Devia para a vítima?" 
 "Já trabalhou com a vítima?"

O programa deve no final emitir uma classificação sobre a participação da pessoa no crime.

Se a pessoa responder positivamente a 2 questões ela deve ser classificada como "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino". 
Caso contrário, ele será classificado como "Inocente".*/

int main(int argc, char *argv[]) {
	
	char resposta;
	int positivos = 0; 

	printf("Telefonou para a vitima? (S ou N)");
	scanf("%c", &resposta);
	if(resposta == 's' || resposta == 'S')
		positivos++;
		
	printf("Esteve no local do crime?");
	scanf("%c", &resposta);
	if(resposta == 's' || resposta == 'S')
		positivos++;
	
	printf("Mora perto da vitima?");
	scanf("%c", &resposta);
	if(resposta == 's' || resposta == 'S')
		positivos++;
		
	printf("Tinha alguma divida com a vitima?");
	scanf("%c", &resposta);
	if(resposta == 's' || resposta == 'S')
		positivos++;
		
	printf("Ja trabalhou com a vitima?");
	scanf("%c", &resposta);
	if(resposta == 's' || resposta == 'S')
		positivos++;
	
	if(positivos<2)
		printf("Inocente");
	else if(positivos ==2)
		printf("Suspeito");
	else if(positivos<5)
		printf("Cumplice");
	else
		printf("Assassino");
	

	return 0;
}