#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	float n1, n2, n3, media;
	
	printf("digite a primeira nota: ");
	scanf("%f", &n1);
	
		printf("\ndigite a segunda nota: ");
	scanf("%f", &n2);
	
		printf("\ndigite a terceira nota: ");
	scanf("%f", &n3);
		
	media = (n1 + n2 + n3)/3;
	
	printf("\nsua media e: %.1f", media);
	
	return 0;
}
