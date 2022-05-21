#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  string ans ="";

  for (int i = 0; i < s.length(); i++) {
    if(s[i] == '0'){
      ans += "0";
    }else if(s[i] == '1'){
      ans += "1";
    }else if(s[i] == 'B' && ans.length() != 0){
      ans.erase(ans.length() - 1);
    }
  }

  cout << ans << endl;
}