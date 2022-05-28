#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> g1 = {1,3,5,7,8,10,12};
  vector<int> g2 = {4,6,9,11};
  vector<int> g3 = {2};
  int x,y,flag;
  cin >> x >> y;
  if(count(g1.begin(),g1.end(),x) >=1 && count(g1.begin(),g1.end(),y) >=1) cout << "Yes" << endl;
  else if(count(g2.begin(),g2.end(),x) >=1 && count(g2.begin(),g2.end(),y) >=1)  cout << "Yes" << endl;
  else if(count(g3.begin(),g3.end(),x) >=1 && count(g3.begin(),g3.end(),y) >=1) cout << "Yes" << endl;
  else cout << "No" << endl;
}