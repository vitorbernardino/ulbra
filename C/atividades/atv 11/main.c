#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//11. Fa�a um programa que receba um n�mero positivo e maior que zero, calcule e mostre:
//a) o n�mero digitado ao quadrado;
//b) o n�mero digitado ao cubo;
//c) a raiz quadrada do n�mero digitado;
//d) a raiz c�bica do n�mero digitado

int main() {
	
	float num, quad, cubo, r2, r3;
	
	printf("coloque um numero: ");
		
	scanf("%f", &num);
	
	if(num > 0){
		r2 = sqrt(num);
		printf("a raiz quadrada �: %.2f", r2);
		
		r3 = cbrt(num);
		printf("\na raiz cubica �: %.2f", r3);
		
		quad = pow(num, 2);
		printf("\nseu numero ao quadrado �: %.2f", quad);
		
		cubo = pow(num, 3);
		printf("\nseu numero ao cubo �: %.2f", cubo);
	}
	 else{
	printf(	"Digite um numeor maior que zero e positivo!!!");
	};
	
	
	return 0;
}
