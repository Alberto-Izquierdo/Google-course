#include <iostream>
using namespace std;
int main(){
	int n1, n2;
	while(true){
		cout << "Introduce the first number" << endl;
		if(!(cin >> n1)){
			cin.clear();
			cin.ignore(100, '\n');
			cout << "That's not a number" << endl;
		}
		else{
			break;
		}
	}
	while(true){
		cout << "Introduce the second number" << endl;
		if(!(cin >> n2)){
			cin.clear();
			cin.ignore(100, '\n');
			cout << "That's not a number" << endl;
		}
		else{
			break;
		}
	}
	if(n1 > n2){
		int aux;
		aux = n1;
		n1 = n2;
		n2 = aux;
	}
	int solution;
	for(int i = n1; i>0; i--){
		if(n1 % i == 0 && n2 % i == 0){
			solution = i;
			break;
		}
	}
	cout << "The solution is: " << solution << endl;
	return 0;
}
