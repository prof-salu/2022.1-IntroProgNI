#include <iostream>

using namespace std;

int main(){
    //MEDIA < 4 --> RECUPERACAO
	//MEDIA >= 4 && < 6 --> PROVA FINAL
	//MEDIA > 6 --> APROVADO
	
	float media;
	cout << "Informe a media: ";
	cin >> media;
	
	if(media < 4){
		cout << "Recuperacao";
	}else if(media >= 4 && media < 6){
		cout << "Prova final";
	}else if(media >= 6){
		cout << "Aprovado";
	}else{
		cout << "Media invalida";
	}
}