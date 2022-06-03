#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  
  vector<int> vec(N);
  int total = 0;
  
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
    total += vec.at(i);
  }
  int ave = 0;
  ave = total/N;
  
  for(int j = 0; j < N; j++){
    if(vec.at(j) > ave){
      cout << vec.at(j) - ave << endl;
    }
    else{
      cout << ave - vec.at(j) << endl; 
    }
  }
}