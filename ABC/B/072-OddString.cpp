#include <bits/stdc++.h>
using namespace std;
 
int main(){
  string s;
  cin >> s;
  string str;
  for(int i = 0; i < s.size(); i += 2){
  	str += s.at(i);
  }
  cout << str << endl;
  return 0;
}