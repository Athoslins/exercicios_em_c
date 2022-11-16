#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

		float tamanho, velocidade, tamanhomegabits, tempo, tem_min;
		
		printf("Digite o tamanho do arquivo (em MB):");
		scanf("%f", &tamanho);
		printf("Digite a velocidade do link da internet (em Mbps):");
		scanf("%f", &velocidade);
		
		tamanhomegabits = tamanho*8;
		tempo = tamanhomegabits/velocidade;
		tem_min = tempo/60;
		
		printf("O tempo aproximado do dowload do arquino eh de %.1f minutos", tem_min);
		
		 

	return 0;
}
