#include <iostream>
using namespace std;
int main(){
	double h = 10, p = 3, r = 0.5, total = 100;
	for(int i = 0; i<100; i++){
		for(int j = 0; j<100; j++){
			for(int k = 0; k<100; k++){
				if(i + j + k == 100){
					if(i*h + j*p + k*r == 100){
						cout << "Hay " << i << " caballos, " << j << " cerdos y " << k << "conejos" << endl;
					}
				}
			}
		}
	}
	return 0;
}
