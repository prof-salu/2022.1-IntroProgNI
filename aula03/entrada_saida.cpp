#include <iostream>
using namespace std;

int main(){
	float salario = 7000;
	int idade = 37;
	string nome = "carlos";
	char sexo = 'm';
		
	printf("Ola mundo!");
	printf("\nSalustiano Oliveira");
	
	printf("\nNome: %s", nome.c_str());
	printf("\nIdade: %d", idade);
	printf("\nSexo: %c", sexo);
	printf("\nSalario: R$ %.2f", salario);
	
	printf("\nIdade: %d, Sexo: %c", idade, sexo);
	
	int codigo;
	printf("\nInforme o codigo: ");
	scanf("%d", &codigo);
	
	printf("O codigo e %d", codigo);
}


