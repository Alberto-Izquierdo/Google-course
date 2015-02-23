#include <iostream>
#include <string>

using namespace std;

double getNumber(string str){
	double num;
	cout << str << endl;
	while(!(cin >> num)){
		cout << "That's not a number. \n" << str << endl;
		cin.clear();
		cin.ignore(1000, '\n');
	}
	return num;
}
int main(){
	string asi1 = "Enter the score for the first asignment";
	string asi2 = "Enter the score for the second asignment";
	string asi3 = "Enter the score for the third asignment";
	string asi4 = "Enter the score for the fourth asignment";
	string mid = "Enter the score for the midterm";
	string fina = "Enter the score for the final";
	string sec = "Enter the score for the section grade";
	double n_asi1 = getNumber(asi1);
	double n_asi2 = getNumber(asi2);
	double n_asi3 = getNumber(asi3);
	double n_asi4 = getNumber(asi4);
	double n_mid = getNumber(mid);
	double n_fina = getNumber(fina);
	double n_sec = getNumber(sec);
	double n_asi_f = (n_asi1 + n_asi2 + n_asi3 + n_asi4) / 4;
	n_asi_f *= 0.4;
	n_mid *= 0.15;
	n_fina *= 0.35;
	n_sec *= 0.1;
	double final_score = n_asi_f + n_mid + n_fina + n_sec;
	cout << "Your final score is: " << final_score << endl;
	return 0;
}
