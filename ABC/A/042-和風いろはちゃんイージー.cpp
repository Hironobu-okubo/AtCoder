#include <bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> vec(3);
  for(int i = 0; i < 3;i++){
    cin >> vec.at(i);
  }
  int count5 = 0;
  int count7 = 0;
  for(int a : vec){
    if(a == 5) count5++;
    if(a == 7) count7++;
  }
  if(count5 == 2 && count7 == 1) cout << "YES" << endl;
  else cout << "NO" << endl;
}