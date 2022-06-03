#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int sec = max(0,(min(b,d) - max(a,c)));
  cout << sec <<endl;
}