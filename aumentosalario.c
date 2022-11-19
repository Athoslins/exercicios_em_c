#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*salários até R$ 280,00 (incluindo) : aumento de 20%
salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
salários de R$ 1500,00 em diante :
    aumento de 5% Após o aumento ser realizado,
informe na tela:
    o salário antes do reajuste;
    o percentual de aumento aplicado;
    o valor do aumento;
    o novo salário, após o aumento.*/

int main(){
	
	float sal, reajuste, aumento, perc, sal_atual;
	printf("Digite o valor do salario:");
	scanf("%f", &sal);
	
	if(sal <= 280.00)
		reajuste = 20;
	else if(sal > 280.00 && sal <=700.00)
		reajuste = 15;
	else if (sal > 700.00 && sal <= 1500.00)
		reajuste = 10;
	else
		reajuste = 5;
	
	aumento = sal * (reajuste/100);
	sal_atual = sal + aumento;
	
	printf("Salario:%.2f", sal);
	printf("\nPercentual de aumento: %.2f", reajuste);
	printf("\n Valor do aumento: %.2f:", aumento);
	printf("\n Salario com aumento: %.2f:", sal_atual);
	
	return 0;
}