#include <iostream>

int main(){
	
	float salario;
	
	printf("Informe o seu salario: ");
	scanf("%f", &salario);
	
	printf("Salario anual: %.2f", (salario * 12));
}
