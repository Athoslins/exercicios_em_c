#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int tipo;
	float quantidade,preco,cartao,valorapagar,pagamento,desconto;
	printf("Escolha apenas um tipo carne? \n1-Para File Duplo\n2-Para alcatara\n3- Para picanha?\n");
	scanf("%i", &tipo);
	printf("Qual a quantidade desejada?(em Kg)\n");
	scanf("%f", &quantidade);
	printf("Compra com cartao tabajara?\n1-para sim\n2-para nao\n");
	scanf("%f", &pagamento);
	
	if(tipo == 1){
		printf("Carne: File Duplo");
		if(quantidade <=5)
			preco = 4.90 * quantidade;
		else
			preco = 5.80 *quantidade;
	}
	else if(tipo ==2){
		printf("Carne: Alcatara");
		if(quantidade <=5)
			preco = 5.90 * quantidade;
		else
			preco = 6.80*quantidade;
	}
	
	else if(tipo ==3){
		printf("Carne: Picanha");
		if(quantidade <=5)
			preco=6.90*quantidade;
		else
			preco=7.80*quantidade;
	}
	
	if(pagamento == 1)
		desconto = (preco*5)/100;
	else
		desconto=0;
	
	valorapagar=preco-desconto;
		
	printf("\nQuantidade:%.2f", quantidade);
	printf("\nPreco total:%.2f", preco);
	printf("\nDesconto:%.2f", desconto);
	printf("\nValor a pagar:%.2f", valorapagar);
	
	return 0;
}