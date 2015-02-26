#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<string> NonEmpty(vector<string> s);

int main(){
	vector<string> n(6);
	n[0] = "hello";
	n[2] = "bye";
	vector<string> sol = NonEmpty(n);
	for(int i = 0; i<sol.size(); i++){
		cout <<sol[i] << ", ";
	}
	cout << endl;
}

vector<string> NonEmpty(vector<string> s){
	vector<string> sol(0);
	int size = 0;
	for(int i = 0; i<s.size(); i++){
		if(s[i] != ""){
			sol.resize(size+1);
			sol[size++] = s[i];
		}
	}
	return sol;
}
