#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,count = 0,isloop = 1;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  
  while(true){
    for(int i = 0; i < n; i++){
      if(a[i] % 2 != 0 && count == 0){
        cout << "0" << endl;
        exit(0);
      }
  	  else if(a[i] % 2 != 0){
        isloop = 0;
        break;
      }
      else{
        a[i] = a[i] / 2;
      }
    }
    if(isloop == 0) break;
    count++;
  }
  cout << count << endl;
  return 0;
}