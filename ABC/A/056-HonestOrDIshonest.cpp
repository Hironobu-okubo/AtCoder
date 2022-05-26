#include <bits/stdc++.h>
using namespace std;
 
int main(){
  char a,b;
  cin >> a >> b;
  bool flag;
  if(a == 'H'){
  	if(b == 'H') flag = true;
    else if(b == 'D') flag = false;
  }
  else if(a == 'D'){
  	if(b == 'H') flag = false;
    else flag = true;
  }
  if(flag) cout << 'H';
  else cout << 'D';
  return 0;
}