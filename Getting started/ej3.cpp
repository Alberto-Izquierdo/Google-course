#include <iostream>
#include <string>

using namespace std;

int getNumber(string str){
	int num;
		cout << str << endl;
	while(!(cin >> num)){
		cout << "That's not a number .\n" << str << endl;
		cin.clear();
		cin.ignore(1000, '\n');
	}
	return num;
}

int main(){
	int total_sec = getNumber("Introduce the number of seconds:");
	int sec = total_sec % 60;
	int min = (total_sec / 60) % 60;
	int hou = (total_sec / 3600);
	cout << "Hours :" << hou << endl << "Minutes: " << min << endl << "Seconds: " << sec << endl;
	return 0;
}
