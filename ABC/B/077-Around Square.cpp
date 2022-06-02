#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int n,x;
  cin >> n;
  for(int i = 1; i * i <= n; i++){
  	if(i * i <= n){
      x = i * i;
    }
  }
  cout << x << endl;
}