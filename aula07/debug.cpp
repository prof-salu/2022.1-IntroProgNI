#include <iostream>
using namespace std;

int main(){
	int x;
	int y = 8;
	x = 4;
	x = x * 3;
	x = x / 2;
	x = x + 5;
	x = x - y;
	
	if(x % 2== 0){
		cout << "PAR (" << x <<")";
	}else{
		cout << "IMPAR (" << x <<")";
	}
}
