#include <bits/stdc++.h>
using namespace std;

int main() {
  int w,a,b;
  cin >> w >> a >> b;
  int d = abs(a - b) - w;
  if(d > 0) cout << d << endl;
  else cout << '0' << endl;
  return 0;
}