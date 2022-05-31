#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++){
  	cin >> a.at(i);
  }
  int i = 0,count = 0;
  while(true){
  	i = a.at(i) - 1;
    count++;
    if(i == 1){
      cout << count << endl;
      exit(0);
    }
    if(count == n){
      cout << "-1" << endl;
      exit(0);
    }
  }
  
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++){
  	cin >> a.at(i);
  }
  int i = 0,count = 0;
  while(true){
  	i = a.at(i) - 1;
    count++;
    if(i == 1){
      cout << count << endl;
      exit(0);
    }
    if(count == n){
      cout << "-1" << endl;
      exit(0);
    }
  }
  
  return 0;
}
