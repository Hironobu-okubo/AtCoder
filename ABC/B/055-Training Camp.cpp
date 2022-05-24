#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  long int sum = 1;
  int a = 1000000007;
  for(int i = 1; i <= n; i++){
    sum = sum * i % a;
  }
  cout << sum;
  return 0;
}