#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int x, a, b, x2, x3, x4;
  cin >> x >> a >> b;
 
  // 1.の出力
  x++;
  cout << x << endl;
 
  // ここにプログラムを追記
  x2 = x * (a + b);
  cout << x2 << endl;
  
  x3 = x2 * x2;
  cout << x3 << endl;
  
  x4 = x3 - 1;
  cout << x4 << endl;
}