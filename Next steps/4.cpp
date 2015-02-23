#include <iostream>
using namespace std;
int accelerate(int &speed, int amount);
int main(){
	cout << "Introduce a speed: ";
	int speed, amount;
	cin >> speed;
	cout << "Introduce an amount of speed: ";
	cin >> amount;
	accelerate(speed, amount);
	cout << "New speed = " << speed << endl;
}

int accelerate(int &speed, int amount){
	speed += amount;
	return 0;
}
