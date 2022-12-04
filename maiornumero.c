#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main()
{
	float n1,n2,n3,n4,n5,maior,menor;
	printf("Digite o primeiro numero:");
	scanf("%f", &n1);
	printf("Digite o segundo numero:");
	scanf("%f", &n2);
	printf("Digite o terceiro numero:");
	scanf("%f", &n3);
	printf("Digite o quarto numero:");
	scanf("%f", &n4);
	printf("Digite o quinto numero:");
	scanf("%f", &n5);
	
	if(n1>n2){
		maior=n1;
		menor=n2;
	}else{
		menor=n1;
		maior=n2;
	}
	if(n3>maior){
		maior=n3;	
	}else if(n3<menor){
		menor=n3;
	}
	if(n4>maior){
		maior=n4;
	}else if(n4<menor){
		menor=n4;
	}
	if(n5>maior){
		maior=n5;
	}else if(n5<menor){
		menor=n5;
	}
	printf("\nO maior numero eh %.2f\n", maior);
	printf("O menor numero eh %.2f", menor);
		
    return 0;
}