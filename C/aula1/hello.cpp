#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float sal, receber, grat, imp;
	
	print("digite o salario base: ");
	
	scanf("%f", &sal);
	
	grat = sal * 5/100;
	imp = sal * 7/100;
	
	receber = sal + grat - imp;
	print("o salario a receber é: %f", receber);
	
	return 0;
}