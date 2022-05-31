#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n,k,sum = 0;
  cin >> n >> k;
  vector<int> l(n);
  for(int i = 0; i < n; i++){
  	cin >> l.at(i);
  }
  sort(l.begin(),l.end());
  for(int i = 0; i < k; i++){
  	sum += l[n - 1 - i];
  }
  cout << sum << endl;
  return 0;
}