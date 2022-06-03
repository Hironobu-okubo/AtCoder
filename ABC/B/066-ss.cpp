#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int x = -1,y = -1;
  int ans = 0;
  vector<int> a(n),b(n);
  for(int i = 0; i < n; i++){
  	cin >> a[i] >> b[i];
    if(x < a[i]){
      x = a[i];
      y = b[i];
      ans = x + y;
    }
  }
  cout << ans;
  return 0;
}