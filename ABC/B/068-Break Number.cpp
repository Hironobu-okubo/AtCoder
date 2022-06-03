#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;  
  cin >> n;
  
  int ans;
  int max;
  
  for (int i = 1; i <= n; i++) {
    int count = 0;
    int x = i;
    while (x % 2 == 0 && x > 0) {
      count++;
      x = x / 2;
    }
    if (max <= count) {
      ans = i;
      max = count;
    }
  }
  cout << ans << endl;
}