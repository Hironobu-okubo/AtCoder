// int main(){
//     int w, h, n;
//     cin >> w >> h >> n;
//     int widthMax = w, heightMax = h, widthMin = 0,heightMin = 0;
//     int x, y, a;
//     rep(i,n){
//         cin >> x >> y >> a;
//         if(a == 1){
//             if(widthMin < x) widthMin = x;
//         }
//         else if(a == 2){
//             if(widthMax > x) widthMax = x;
//         }
// 		else if(a == 3){
// 			if(heightMin < y) heightMin = y;
// 		}
// 		else if(a == 4){
// 			if(heightMax > y) heightMax = y;
// 		}
//     }
// 	out(widthMax);
// 	out(widthMin);
// 	out(heightMax);
// 	out(heightMin);
// 	int area = (widthMax - widthMin) * (heightMax - heightMin);
// 	out(area);
// }

// /*
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int w, h, n;
//   cin >> w >> h >> n;
//   int maxwid = w, minwid = 0, maxhei = h, minhei = 0;
//   int x, y, a;
//   for(int i = 0; i < n; i++){
//   	cin >> x >> y >> a;
//     if(a == 1) minwid = max(x,minwid);
//     else if(a == 2) maxwid = min(x,maxwid);
//     else if(a == 3) minhei = max(minhei,y);
//     else if(a == 4) maxhei = min(maxhei,y);
//   }
//   if(maxwid - minwid < 0 || maxhei - minhei < 0) cout << 0 << endl;
//   else cout << (maxwid - minwid) * (maxhei - minhei) << endl;
// }
// */

#include <bits/stdc++.h>
using namespace std;
/* alias */
using ull = unsigned long long;
using ll = long long;
using vi = vector<int>;
using vl = vector<long>;
using vll = vector<long long>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vvll = vector<vll>;
using vs = vector<string>;
using pii = pair<int, int>;
/* define short */
#define pb push_back
#define mp make_pair
#define all(obj) (obj).begin(), (obj).end()
#define YESNO(bool) if(bool){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
#define yesno(bool) if(bool){cout<<"yes"<<endl;}else{cout<<"no"<<endl;}
#define YesNo(bool) if(bool){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}
/* REP macro */
#define reps(i, a, n) for (ll i = (a); i < (ll)(n); ++i)
#define rep(i, n) reps(i, 0, n)
#define repp(i,n) reps(i, 0, n + 1)
#define rrep(i, n) reps(i, 1, n + 1)
#define repd(i,n) for(ll i=n-1;i>=0;i--)
#define rrepd(i,n) for(ll i=n;i>=1;i--)
#define out(x) cout << x << endl
//定数
#define INF32 2147483647 
#define INF64 9223372036854775807 
#define MOD 1000000007 

int main(){
  int W,H,n;
  cin >> W >> H >> n;
  vi x(n),y(n),a(n);
  int X = 0, Y = 0;
  rep(i,n){
    cin >> x[i] >> y[i] >> a[i];
    if(a[i] == 1){
      X = max(x[i],X);
    }
    else if(a[i] == 2){
      W = min(x[i],W);
    }
    else if(a[i] == 3){
      Y = max(y[i],Y);
    }
    else if(a[i] == 4){
      H = min(y[i],H);
    }
  }
  int area = max((W - X),0) * max((H - Y),0);
  out(area);
}

