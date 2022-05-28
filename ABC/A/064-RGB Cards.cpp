#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b,c,num;
  cin >> a >> b >> c;
  num = 100 * a + 10 * b + c;
  if(num % 4 == 0) cout << "YES" << endl;
  else cout << "NO" << endl;
}