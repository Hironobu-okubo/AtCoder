#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n,k;
  cin >> n >> k;
  int ans = 1;
  for(int i = 0; i < n; i++){
  	int x = ans * 2, y = ans + k;
    if(x >= y) ans = y;
    else ans = x;
  }
  cout << ans << endl;
}