#include <bits/stdc++.h>
using namespace std;
 
int main(){
  string s;
  cin >> s;
  int len = s.length();
  char ini = s.at(0);
  char end = s.at(len - 1);
  cout << ini << len -2 << end << endl;
}