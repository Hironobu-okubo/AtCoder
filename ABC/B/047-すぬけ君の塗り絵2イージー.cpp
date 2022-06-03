#include <bits/stdc++.h>
using namespace std;

int main() {
  int w, h, n;
  cin >> w >> h >> n;
  int maxwid = w, minwid = 0, maxhei = h, minhei = 0;
  int x, y, a;
  for(int i = 0; i < n; i++){
  	cin >> x >> y >> a;
    if(a == 1) minwid = max(x,minwid);
    else if(a == 2) maxwid = min(x,maxwid);
    else if(a == 3) minhei = max(minhei,y);
    else if(a == 4) maxhei = min(maxhei,y);
  }
  if(maxwid - minwid < 0 || maxhei - minhei < 0) cout << 0 << endl;
  else cout << (maxwid - minwid) * (maxhei - minhei) << endl;
}