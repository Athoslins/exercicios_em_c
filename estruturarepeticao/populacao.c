
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main()
{
	int popA,popB;
	float taxA,taxB;
	
	while(1){
	
	printf("Digite a populaçao e a taxa de crescimento de A.");
	scanf("%i %f",&popA,&taxA);
	printf("Digite a populaçao e a taxa de crescimento de B.");
	scanf("%i %f", &popB, &taxB);
	
	printf("\nPopulacao:%i, Taxa de crescimento: %.1f", popA,taxA);
	printf("\nPopulacao:%i, taxa de crescimento: %.1f\n\n", popB,taxB);
	}
	
		
    return 0;
}