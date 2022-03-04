#include <stdio.h>  

int main(void)  {
    int numero1, numero2, resultado;  

    printf("Digite o primeiro numero: ");  
    scanf("%d", &numero1);  

    printf("Digite o segundo numero: ");  
    scanf("%d", &numero2);  

    resultado = numero1 + numero2;  

    printf("Resultado da soma e %d", resultado); 
     
    return 0;
}