#include <iostream>
#include <string>

using namespace std;

string getMonth(char c){
	switch(c){
		case 'A':
			return "January";
		case 'B':
			return "February";
		case 'C':
			return "March";
		case 'D':
			return "April";
		case 'E':
			return "May";
		case 'F':
			return "June";
		case 'G':
			return "July";
		case 'H':
			return "August";
		case 'I':
			return "September";
		case 'J':
			return "October";
		case 'K':
			return "November";
		case 'L':
			return "December";
		default:
			return NULL;
	}
}

int getNumber(char c){
	switch(c){
		case 'Q':
			return 0;
		case 'R':
			return 1;
		case 'S':
			return 2;
		case 'T':
			return 3;
		case 'U':
			return 4;
		case 'V':
			return 5;
		case 'W':
			return 6;
		case 'X':
			return 7;
		case 'Y':
			return 8;
		case 'Z':
			return 9;
		default:
			return -1;
	}
}

int getYear(char c){
	int year = c - 65 + 1995;
	return year;
}

int main(){
	string date;
	cout << "Introduce the date encoded: " << endl;
	while(!(cin >> date)){
		cout << "That's not a string" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
	}
	char month = date[0];
	string str_month = getMonth(month);
	char day1 = date[1];
	int int_day1 = getNumber(day1);
	char day2 = date[2];
	int int_day2 = getNumber(day2);
	char year = date[3];
	int int_year = getYear(year);
	cout << str_month << ", " << int_day1 << int_day2 << ", " << int_year << endl;
}
