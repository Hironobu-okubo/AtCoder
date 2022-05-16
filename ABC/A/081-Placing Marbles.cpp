#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string a;
  int ans;
  cin >> a ;
  if(a[0] == '1')ans++;
  if(a[1] == '1')ans++;
  if(a[2] == '1')ans++;
  cout << ans << endl;
}