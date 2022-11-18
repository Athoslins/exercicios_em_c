#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a média alcançada por
 aluno e apresentar: A mensagem "Aprovado", se a média alcançada for maior ou igual a sete; A mensagem "Reprovado",
  se a média for menor do que sete; A mensagem "Aprovado com Distinção", se a média for igual a dez. */

int main(){
	
	float n1, n2, media;
	printf("Digite a primeira nota:");
	scanf("%f", &n1);
	printf("Digite a segunda nota:");
	scanf("%f", &n2);
	
	media = (n1 + n2)/2.0;
	
	if(media == 10){
		printf("Aprovado com distinção");
		
	}
	else if (media >= 7){
		printf("Aprovado");
	}
	else{
		printf("Reprovado");
	}
		
	return 0;
}