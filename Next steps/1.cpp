#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>

using namespace std;

int StartUp();

int Fire();

int main(){
	int killed;
	char done;
	StartUp();
	killed = 0;
	do{
		killed += Fire();
		cout << "I see another enemy, care to shoot again? (Y/N)"; 
		cin >> done;
	} while(done != 'n');
	cout << "You killed " << killed << " of the enemy." << endl;
	return 0;
}

int StartUp(){
	cout << "Wellcome to Artillery." << endl << "You are in the middle of a war and being charged by thousands of enemies." << endl << "You have one cannon, which you can shoot at any angle." << endl << "You only have 10 cannonballs for this target.." << endl << "Let's begin..." << endl << endl;
	return 0;
}

int Fire(){
	double n = rand() % 400 + 300;
	double angle;
	cout << "The enemy is " << n << "feet away!!!" << endl;
	for(int i = 1; i<=10; i++){
		cout << "What angle? ";
		cin >> angle;
		double in_angle = angle * M_PI / 180;
		double Velocity = 200.0;
		double Gravity = 32.2;
		double time_in_air = (2.0 * Velocity * sin(in_angle)) / Gravity;
		double distance = round((Velocity * cos(in_angle)) * time_in_air);
		if(distance - n < 20){
			cout << "You hit him!!" << endl << "It took you " << i << " shoots." << endl;
			return 1;
		}
		else{
			cout << "You failed by " << distance - n << endl;
		}
	}
	return 0;
}
