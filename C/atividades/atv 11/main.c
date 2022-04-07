#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//11. Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
//a) o número digitado ao quadrado;
//b) o número digitado ao cubo;
//c) a raiz quadrada do número digitado;
//d) a raiz cúbica do número digitado

int main() {
	
	float num, quad, cubo, r2, r3;
	
	printf("coloque um numero: ");
		
	scanf("%f", &num);
	
	if(num > 0){
		r2 = sqrt(num);
		printf("a raiz quadrada é: %.2f", r2);
		
		r3 = cbrt(num);
		printf("\na raiz cubica é: %.2f", r3);
		
		quad = pow(num, 2);
		printf("\nseu numero ao quadrado é: %.2f", quad);
		
		cubo = pow(num, 3);
		printf("\nseu numero ao cubo é: %.2f", cubo);
	}
	 else{
	printf(	"Digite um numeor maior que zero e positivo!!!");
	};
	
	
	return 0;
}
