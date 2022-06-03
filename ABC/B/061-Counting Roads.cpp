#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n,m,x,y;
  cin >> n >> m;
  int a[n] = {0};
  for(int i = 0; i < m; i++){
  	cin >> x >> y;
    a[x - 1] += 1;
    a[y - 1] += 1;
  }
  for(int i = 0; i < n; i++){
  	cout << a[i] << endl;
  }
}
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m,x,y;
  cin >> n >> m;
  int a[n] = {0};
  for(int i = 0; i < m; i++){
  	cin >> x >> y;
    a[x - 1] += 1;
    a[y - 1] += 1;
  }
  for(int i = 0; i < n; i++){
  	cout << a[i] << endl;
  }
}
