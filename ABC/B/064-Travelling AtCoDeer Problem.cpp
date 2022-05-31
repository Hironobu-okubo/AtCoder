#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++){
  	cin >> a.at(i);
  }
  sort(a.begin(),a.end());
  int maxnum = *max_element(begin(a),end(a));
  int minnum = *min_element(begin(a),end(a));
  int diff = maxnum - minnum;
  cout << diff << endl;