#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
int main()
{
	int bimestresAnuais,numeroDeAlunos, aluno,notas;
	bimestresAnuais=4;
	numeroDeAlunos=4; 
	
	float notasAlunos[numeroDeAlunos] [bimestresAnuais];
	float mediasAlunos[numeroDeAlunos];
	
	float media = 0;
	
	printf("Insira as 4 notas do aluno 1:\n");
	
	for(aluno = 0; aluno<numeroDeAlunos; aluno++){
		for(notas=0; notas < bimestresAnuais; notas++){
			scanf("%f", &notasAlunos[aluno][notas]);
			media += notasAlunos[aluno][notas];
		}
		mediasAlunos[aluno] = media/bimestresAnuais;
		media=0;
		printf("Insira as 4 notas do aluno %i:\n", aluno+2);
	}
	for(aluno=0;aluno<numeroDeAlunos;aluno++){
		printf("A media do aluno %i eh: %2.f\n", aluno+1, mediasAlunos[aluno]);
	}
	
	
    return 0;
}