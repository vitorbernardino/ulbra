
#include <stdio.h>
#include <stdlib.h>

#include <locale.h> 




int main(){
    int n1, n2, n3, n4, soma;

    printf("digite o primeiro numero a ser somado: ");
    scanf("%i", &n1);
    
        printf("digite o segundo numero a ser somado: ");
    scanf("%i", &n2);
    
        printf("digite o terceiro numero a ser somado: ");
    scanf("%i", &n3);
    
        printf("digite o quarto numero a ser somado: ");
    scanf("%i", &n4);
    
    printf("O primeiro numero é: %i\n", n1);
    printf("O segundo numero é: %i\n", n2);
    printf("O terceiro numero é: %i\n", n3);
    printf("O quarto numero é: %i\n", n4);
    
    
    
    soma=n1+n2+n3+n4;
    
    printf("\nO resultado da soma desses numeros é: %i \n\n", soma);
    
    return 0;
}

