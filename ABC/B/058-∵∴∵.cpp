#include <bits/stdc++.h>
using namespace std;
 
int main(){
  string o,e;
  cin >> o >> e;
  string pass = "";
  for(int i = 0; i < max(o.size(),e.size());i++){
    pass += o[i];
    pass += e[i];
  }
  if(o.size() < e.size()){
    pass.erase(o.size() + e.size() - 1, 1);
  }
  else{
  	pass.erase(o.size() + e.size(), 1);
  }
  cout << pass << endl;
  return 0;
}