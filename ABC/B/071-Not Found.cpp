#include <bits/stdc++.h>
using namespace std;
 
int main(){
  string s;
  cin >> s;
  vector<bool> x(26,true);
  for(int i = 0; i < s.size(); i++){
  	x.at(s.at(i) - 'a') = false;
  }
  for(int i = 0; i < 26; i++){
  	if(x.at(i)){
      cout << char('a' + i) << endl;
      return 0;
    }
  }
  
       cout << "None" << endl;
}