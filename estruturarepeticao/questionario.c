/*
Faça um programa que leia e valide as seguintes informações:
    Nome: maior que 3 caracteres;
    Idade: entre 0 e 150;
    Salário: maior que zero;
    Sexo: 'f' ou 'm';
    Estado Civil: 's', 'c', 'v', 'd';
*/
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
int main()
{
	char nome[50], sexo, estadoCivil;
	int idade;
	float salario;
	
	printf("Digite o nome:");
	scanf("%s", nome);
	while(strlen (nome)<4){
		printf("Digite mais de 3 caracteres para nome");
		printf("\nDigite o nome:");
		scanf("%s", nome);	
	}
	printf("Digite a idade:");
	scanf("%i", &idade);
	while(idade<0 || idade>150){
		printf("Idade invalida");
		printf("\nDigite a idade:");
		scanf("%i", &idade);
	}
	printf("Qual o salario:");
	scanf("%f", &salario);
	while(salario<0){
		printf("Salario invalido.");
		printf("\nQual o salario:");
		scanf("%f", &salario);
	}
	printf("Qual o sexo? (f ou m)");
	scanf("%s", &sexo);
	while((sexo != 'f')&& (sexo!='F') &&(sexo!= 'm')&&(sexo!='M')){
		printf("Sexo invalido");
		printf("\nDigite o sexo:");
		scanf("%s", &sexo);
	}
	printf("Estado civil? (s,c,v ou d)");
	scanf("%s", &estadoCivil);
	while((estadoCivil != 's')&&(estadoCivil!='c')&&(estadoCivil!='v')&&
	(estadoCivil!='d')){
		
		printf("Estado civil invalido");
		printf("\nQual o estado civil?");
		scanf("%s", &estadoCivil);
	}  
	
	
	
	
    return 0;
}