#include <bits/stdc++.h>
using namespace std;
 
int main(){
  string a,b;
  cin >> a >>b;
  
  if(a.size() > b.size()) cout << "GREATER" << endl;
  else if(a.size() < b.size()) cout << "LESS" << endl;
  else{
    int len = a.length();
    for(int i = 0; i < len; i++){
      if(a[i] > b[i]){
        cout << "GREATER" << endl;
        exit(0);
      }
      else if(a[i] < b[i]){
        cout << "LESS" << endl;
        exit(0);
      }
    }
    cout << "EQUAL" << endl;
  }
  return 0;
}
