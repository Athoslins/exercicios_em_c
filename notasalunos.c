#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	
	char conceito, situacao;
	float n1,n2, media;
	printf("Digite a primeira nota:");
	scanf("%f", &n1);
	printf("Digite a segunda nota:");
	scanf("%f", &n2);
	
	media = (n1+n2)/2;
	
	if(media >= 9 && media <= 10){
		conceito ='A';
		situacao = 'APROVADO';
		}
	else if(media >= 7.5 && media < 9){
		conceito = 'B';
		situacao = 'APROVADO';
	}
	else if( media >= 6 && media < 7.5){
		conceito = 'C';
		situacao = 'APROVADO';}
	else if( media >= 4 && media < 6){
		conceito = 'D';
		situacao == 'REPROVADO';}
	else if ( media >= 0 && media < 4){
	    conceito = 'E';
		situacao == 'REPROVADO';}
		
	if(conceito == 'D' || conceito == 'E')
		printf("Reprovado");
		
		
	printf("Primeira Nota: %.2f", n1);
	printf("\nSegunda Nota: %.2f", n2);
	printf("\nMedia: %.2f", media);
	printf("\nConceito:%c", conceito);
	printf("\nSitucao na disciplina:%c", situacao);
	
		
		
		
	
	
	return 0;
}
