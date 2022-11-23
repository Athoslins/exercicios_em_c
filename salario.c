#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	
	float valor_hora, hora_trab, sal_bruto,inss,fgts, ir, total_des, sal_liquido;
	printf("Qual o valor da hora trabalhada?");
	scanf("%f", &valor_hora);
	printf("Quantas horas voce trabalha por mes?");
	scanf("%f", &hora_trab);
		
	sal_bruto = valor_hora * hora_trab;
	
	if(sal_bruto <= 900)
		ir = 0.00;
	else if(sal_bruto >900 && sal_bruto<=1500)
		ir = 5;
	else if(sal_bruto >1500 && sal_bruto<=2500)
		ir = 10;
	else
		ir = 20;
				
	ir = sal_bruto * (ir/100.0);
	inss = sal_bruto * (10/100.0);
	fgts = sal_bruto * (11/100.0);	
	total_des = ir + inss;
	sal_liquido = sal_bruto - total_des;
	
	printf("Salário Bruto:%.2f", sal_bruto);
	printf("\n(-) IR:%.2f", ir);
	printf("\n(-) INSS:%.2f", inss);
	printf("\nFGTS:%.2f", fgts);
	printf("\nTotal de descontos: %.2f", total_des);
	printf("\nSalario Liquido:%.2f", sal_liquido);
	
	return 0;
}
