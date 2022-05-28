#include <iostream>
using namespace std;

int main(){
    //Imprimir todos os numeros impares entre +270 e -27

    for(int i = 270; i >= -27; i--){
        if(i % 2 != 0){
            cout << i << " ";
        }
    }
}