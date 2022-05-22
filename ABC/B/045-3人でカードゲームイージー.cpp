#include <bits/stdc++.h>
using namespace std;

int main() {
  string a,b,c;
  cin >> a >> b >> c;
  char next = 'a';
  int pos_a = 0;
  int pos_b = 0;
  int pos_c = 0;
  int length_a = a.length(),length_b = b.length(),length_c = c.length();
  while(true){
    if(next == 'a'){
      if(pos_a >= length_a){
        cout << 'A' << endl;
        break;
      }
      else{
        next = a.at(pos_a);
        pos_a++;
      }
    }
     if(next == 'b'){
      if(pos_b >= length_b){
        cout << 'B' << endl;
        break;
      }
      else{
        next = b.at(pos_b);
        pos_b++;
      }
    }
     if(next == 'c'){
      if(pos_c >= length_c){
        cout << 'C' << endl;
        break;
      }
      else{
        next = c.at(pos_c);
        pos_c++;
      }
    }
  }
  return 0;
}