#include <bits/stdc++.h>
using namespace std;

int main() {
  int h,w;
  cin >> h >> w;
  vector<string> vec(h);
  for(int i = 0; i < w + 2; i++){
  	cout << '#';
  }
  cout << endl;
  
  for(int i = 0; i < h; i++){
    cout << '#';
  	cin >> vec.at(i);
    cout << vec.at(i);
    cout << '#' << endl;
  }
  for(int i = 0; i < w + 2; i++){
  	cout << '#';
  }
}