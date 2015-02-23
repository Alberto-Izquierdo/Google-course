#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	int num = rand() % 100 + 1;
	bool guessed = false;
	int user_num;
	do{
		cout << "Guess the number!" << endl;
		if(!(cin >> user_num)){
			cout << "That's not a number" << endl;
			cin.clear();
			cin.ignore(100, '\n');
		}	else if(user_num == num){
			guessed = true;
		} else if(user_num > num){
			cout << "That's too high!" << endl;
		} else {
			cout << "That's too low!" << endl;
		}
	} while(!guessed);
	cout << "You're right!" << endl;
  return 0;
} 
