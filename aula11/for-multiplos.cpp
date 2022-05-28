#include <iostream>
using namespace std;

int main(){
    //Imprimir todos o multiplos 7 entre 1 e 500

    for(int i = 1; i <= 500; i++){
        if(i % 7 == 0){
            //cout << i << " ";
        }
    }

    int x = 0;
    x = x + 1; // x++ // x += 1
    cout << "X: " << x << endl;

    int y = 0;
    y++;
    cout << "Y: " << y << endl;
}