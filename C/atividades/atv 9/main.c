#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float base, altura, area;
	
	printf("declare a base de seu triangulo: ");
	scanf("%f", &base);
	
	printf("declare a altura de seu triangulo: ");
	scanf("%f", &altura);
	
	area = (base*altura)/2;
	
	printf("a area do seu triangulo é: %.2f", area);
	
	return 0;
}
