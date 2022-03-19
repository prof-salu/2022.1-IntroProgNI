#include <iostream>

int main(){
	//Criação das variáveis
	int num1, num2;
	
	//Entrada dos dados
	printf("Informe o numero 01: ");
	scanf("%d", &num1);
	
	printf("Informe o numero 02: ");
	scanf("%d", &num2);
	 
	//Saída dos dados
	printf("Soma: %d", (num1 + num2));
	printf("\nSubtracao: %d", (num1-num2));
	printf("\nMultiplicacao: %d", (num1*num2));
	printf("\nDivisao: %d", (num1/num2));
	printf("\nResto: %d", (num1%num2));	
}
