#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m;
  cin >> n;
  vector<int> vec1(n);
  for(int i = 0; i < n; i++){
    cin >> vec1[i];
  }
  cin >> m;
  vector<int> vec2(n);
  int p,x;
  for(int j = 0; j < m; j++){
    vec2 = vec1;
  	cin >> p >> x;
    vec2[p - 1] = x;
    cout << accumulate(vec2.begin(),vec2.end(),0) << endl;
  }
  return 0;
  
}