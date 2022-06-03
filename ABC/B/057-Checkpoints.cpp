#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m;
  cin >> n >> m;
  int a[n],b[n],c[m],d[m];
  for(int i = 0; i < n; i++){
  	cin >> a[i] >> b[i];
  }
  for(int i = 0; i < m; i++){
  	cin >> c[i] >> d[i];
  }
  for(int i = 0; i < n; i++){
  	int number;
    int min_dis = 1e9;
    for(int j = 0; j < m; j++){
    	int dis = abs(a[i] - c[j]) + abs(b[i] - d[j]);
        if(dis < min_dis){
      	  min_dis = dis;
          number = j + 1;
      }
    }
    cout << number << endl;
  }
      return 0;
}