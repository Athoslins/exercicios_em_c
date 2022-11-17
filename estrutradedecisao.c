#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	char sexo;
	
	printf("Digite M ou F, conforme o seu sexo:");
	scanf("%c", &sexo);
	
	if( sexo == 'F' || sexo == 'f'){
		printf("Sexo feminino");
	}
		
	else if( sexo == 'M' || sexo == 'mmm'){
			printf("Sexo Masculino");
		}
	else{
		printf("Sexo Invalido");
	}
	
	return 0;
}