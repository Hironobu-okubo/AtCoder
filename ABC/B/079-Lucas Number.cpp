#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n,i;
  cin >> n;
  vector<long long> luka(n + 1);
  luka[0] = 2;
  luka[1] = 1;
  for(i = 2; i <= n; i++){
  	luka[i] = luka[i - 1] + luka[i - 2];
  }
  cout << luka[n] << endl;
}