#include <iostream>

using namespace std;

int main(){
	//Faça um programa que receba o salário de um funcionário e o tempo de serviço em
	//anos o programa devera reajustar o salário em função do tempo seguindo as regras
	//abaixo: 
		//funcionários com 10 ou mais de serviço receberam um reajuste de 30%
		//funcionários com menos de 10 anos de serviço receberam um reajuste de 37,5%.
		
		int tempoServico;
		float salario;
		
		cout << "Informe o tempo de servico: ";
		cin >> tempoServico;
		
		cout << "Informe o salario: ";
		cin >> salario;
		
		if(tempoServico >= 10){
			salario = salario * 1.3;
		}else{
			salario = salario * 1.375;
		}
		
		cout << "Salario com reajuste: R$" << salario;

}
