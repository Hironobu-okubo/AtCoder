#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int len = s.size();
  for(int i = 0; i < len; i++){
    for(int j = i + 1; j < len; j++){
      if(s.at(i) == s.at(j)){
       cout << "no" << endl;
      }
      return 0;
    }
  }
  cout << "yes" << endl;
}