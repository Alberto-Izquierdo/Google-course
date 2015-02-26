#include <vector>
#include <iostream>
using namespace std;

void Expand(vector<int> &v);

int main(){
	vector<int>  v(1);
  
  for (int k = 1; k <= 16; k++) {
    if (v.size() < k) {
      cout << "vector size before calling Expand: " << v.size() << endl;
      Expand(v);
      cout << "vector size after calling Expand: " << v.size() << endl;
    }
    v[k-1] = k;
  }
  cout << "[ ";
  for (int k = 0; k < v.size(); k++) {
    cout << v[k] << ' ';
  }
  cout << "]\n";
  return 0;
}

void Expand(vector<int> &v){
	v.resize(v.size()*2);
}
