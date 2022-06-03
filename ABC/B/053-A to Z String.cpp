#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int len = s.length();
  int start = 0,goal = 0,max = 0;
  for(int i = 0; i < len; i++){
    if(s[i] == 'A'){
      start = i;
      break;
    }
  }
  for(int i = 0; i < len; i++){
    if(s[i] == 'Z'){
      goal = i;
    }
  }
  cout << goal - start + 1 << endl;
  return 0;
}