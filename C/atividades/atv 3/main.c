#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1, n2, n3, p1, p2, p3, media;
	
	printf("digite a nota 1: ");
	scanf("%f", &n1);
	
		printf("digite a nota 2: ");
	scanf("%f", &n2);
	
		printf("digite a nota 3: ");
	scanf("%f", &n3);
	
		printf("digite o peso 1: ");
	scanf("%f", &p1);
	
		printf("digite o peso 2: ");
	scanf("%f", &p2);
	
		printf("digite o peso 3: ");
	scanf("%f", &p3);
	
	media = (n1*p1 + n2*p2 + n3*p3)/(p1 + p2 + p3);
	
	printf("\nsua media ponderada e: %.1f", media);
	
	return 0;
}
