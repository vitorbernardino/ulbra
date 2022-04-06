#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float dep, taxa, rend, total;
	
	printf("declare o deposito: ");
	scanf("%f", &dep);
	
	printf("declare a taxa: ");
	scanf("%f", &taxa);
	
	rend = dep * taxa/100;
	total = dep + rend;
	
	printf("seu rendimento é: %.2f", rend);
	printf("\ne seu total e: %.2f", total);
	
	return 0;
}
