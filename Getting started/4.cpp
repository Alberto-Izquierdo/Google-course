#include <iostream>
using namespace std;
int getInput(){
	cout << "Introduce las ventas semanales" << endl;
	int n;
	while(!(cin >> n)){
		cin.clear();
		cin.ignore(100, '\n');
		cout << "Introduce un número correcto";
	}
	return n;
}

int calcMethod1(int n){
	return 600;
}

double calcMethod2(int n){
	return 7*(5*8) + n*0.1*225;
}

double calcMethod3(int n){
	return n*(0.2*225) + n*20;
}

int main(){
	cout << calcMethod1(20) << ", " << calcMethod2(20) << ", " << calcMethod3(20) << endl;
	return 0;
}
