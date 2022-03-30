#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float sal, perc, aumento, novosal;
	
	printf("escreva o salario atual: ");
	scanf("%f", &sal);	
	
	printf("\nescreva o percentual de aumento: ");
	scanf("%f", &perc);
	
	aumento = sal * perc/100;
	
	printf("\naumento: %.2f", aumento);
	
	novosal= sal + aumento;
	
	printf("\nnovo salario: %.2f", novosal);
	return 0;
}
