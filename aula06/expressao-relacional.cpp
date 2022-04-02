#include <iostream>

using namespace std;

int main(){
	int a = 5;
	int b = 8;
	
	cout << (a < b) << "\n";				//true  1
	cout << (a + 3 <= b) << "\n";			//true	1
	cout << (a % 2 > b / 4) << "\n";		//false	0
	cout << (a + 11 == b * 2 ) << "\n";		//true	1	
	cout << (a != b - 2) << "\n";			//true	1
	cout << (((a * 3)/ 2) < b) << "\n";		//true	1
	cout << (((a + b) / 2) != 6) << "\n";	//false	0
}
