#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float sal, receber, grat, imp;
	
	printf("digite o salario base: ");
	
	scanf("%f", &sal);
	
	grat = sal * 5/100;
	imp = sal * 7/100;
	
	receber = sal + grat - imp;
	printf("o salario a receber é: %.2f", receber);
	
	return 0;
}
