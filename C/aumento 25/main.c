#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float sal, novosal;
	
	printf("digite o salario: ");
	scanf("%f", &sal);
	
	printf("o salario atual e: %.2f", sal);
	
	novosal= sal + sal * 25/100;
	
	printf("\ne o novo salario e: %.2f", novosal);
	
	return 0;
}
