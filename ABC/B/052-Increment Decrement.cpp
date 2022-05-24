#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int now = 0, maximum = 0;
  for(int i = 0; i < n; i++){
  	if(s[i] == 'I') {
      now++;
      maximum = max(now,maximum);
    }
    else{
      now--;
    }
  }
  cout << maximum << endl;
  return 0;
}