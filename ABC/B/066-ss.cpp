#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string s;
  cin >> s;
  int lenNum = s.size();
  for(int i = 0; i < lenNum; i++){
  	s.pop_back();
    string s1 = s.substr(0,s.size()/2);
    string s2 = s.substr(s.size()/2);
    if(s1 == s2){
      cout << s.size() << endl;
      exit(0);
    }
  }
}