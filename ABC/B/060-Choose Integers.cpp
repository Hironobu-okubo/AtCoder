#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int a,b,c;
  cin >> a >> b >> c;
  for(int i = 0; i < b; i++){
  	if(a * i % b == c){
    	cout << "YES" << endl;
      exit(0);
    }
  }
  cout << "NO";
  return 0;
}