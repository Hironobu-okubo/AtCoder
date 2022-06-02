#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int x,y,z,count = 0;
  cin >> x >> y >> z;
  int total = z;
  while(true){
    total += y;
    total += z;
    if(x < total) break;
    count++;
  }
  cout << count << endl;
}