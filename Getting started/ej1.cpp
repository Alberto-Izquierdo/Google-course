#include <iostream>

using namespace std;

int getTemperature(int chirps){
	int temp = (chirps + 40)/4;
	return temp;
}

int main(){
	cout << "Introduce number of chirps:" << endl;
	int number;
	while(!(cin >> number)){
		cout << "That's not a number, introduce a number" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
	}
	int sol = getTemperature(number);
	cout << "The temperature is: " << sol << " degrees."<< endl;
	return 0;
}
