#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,ans = 0;
  cin >> n;
  int rem = n;
  for(int i = 0; i < 8; i++){
  	ans += rem % 10;
    rem = rem / 10;
  }
  if(n % ans == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
}