#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B, C;
  cin >> A >> B >> C;
  
  int maxheight = max(max(A,B),C);
  int minheight = min(min(A,B),C);
  
  cout << maxheight - minheight << endl;
}