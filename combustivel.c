#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Um posto está vendendo combustíveis com a seguinte tabela de descontos: Álcool: até 20 litros, desconto de 3% por litro 
acima de 20 litros,desconto de 5% por litro.
 Gasolina: até 20 litros, desconto de 4% por litro acima de 20 litros, desconto de 6% por litro

Escreva um algoritmo que leia o número de litros vendidos,
 o tipo de combustível (codificado da seguinte forma: A-álcool, G-gasolina),
  calcule e imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,50 o preço do litro do álcool é R$ 1,90.*/

int main(int argc, char *argv[]) {
	
	char comb;
	float litros,preco;
	
	printf("Qual o tipo de combustivel? (A-alcool, G-gasolina)");
	scanf("%c", &comb);
	printf("Quantos litros deseja?");
	scanf("%f", &litros);
	
	if(comb == 'A' || comb =='a'){
		
		preco = 1.90;
		if(litros <= 20)
			preco = (preco - ((preco*3)/100)) * litros;
		else if(litros>20)
			preco = (preco -((preco*5)/100)) * litros;
	}
	if(comb == 'G' || comb == 'g'){
   		
   		preco = 2.50;
   		if(litros <= 20)
   			preco = (preco -((preco*4)/100)) * litros;
   		else if(litros>20)
   			preco = (preco -((preco*6)/100)) * litros;		   
	}


	printf("Valor a ser pago %.2f", preco);
	return 0;
}