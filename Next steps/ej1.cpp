#include <iostream>
#include <math.h>
using namespace std;

bool hasSquare(double num);
bool isSum(double num);

int main(){
	bool isSolution = false;
	double solution = 32767;
	do{
		solution += 1;
		isSolution = isSum(solution) && hasSquare(solution);
	}while(!isSolution);
	cout << "The solution is: " << solution << endl;
}

bool hasSquare(double num){
	if(remainder(sqrt(num),1)==0){
		return true;
	}
	else{
		return false;
	}
}

bool isSum(double num){
	double aux = 0, i = 0;
	do{
		i += 1;
		aux += i;
		if(aux == num){
			return true;
		}
	}while(aux<=num);
	return false;
}
