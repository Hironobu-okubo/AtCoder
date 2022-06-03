#include <bits/stdc++.h>
using namespace std;

int main() {
  string w;
  cin >> w;
  int count1;
  int count2 = 0;
  for(int i = 0; i < w.length(); i++){
    count1 = 0;
    for(int j = 0; j < w.length(); j++){
      if(w.at(i) == w.at(j)){
        count1++;
      }
    }if(count1 % 2 != 0) count2++;
  }
  if(count2 > 0) cout << "No";
  else cout<< "Yes";
  return 0;
}