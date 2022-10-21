
// int main(){
//     int n, m, X, Y;
//     cin >> n >> m >> X >> Y;
//     vi x(n);
//     vi y(m);
//     rep(i,n){
//         cin >> x[i];
//     }
//     rep(i,m){
//         cin >> y[i];
//     }
//     sort(all(x));
//     sort(all(y));
//     bool noWar = false;
//     reps(i,X + 1,Y + 1){
//        if(x[x.size() - 1] < i && i <= y[0]) noWar = true;
//     }
//     if(noWar) out("No War");
//     else out("War");
// }



// /*
// int main(){
//     int n,m,X,Y;
//     cin >> n >> m >> X >> Y;
//     vi x(n);
//     vi y(m);
//     rep(i,n){
//         cin >> x[i];
//     }
//     rep(i,m){
//         cin >> y[i];
//     }
 
//     for(int i = X + 1; i < Y; i++){
//         bool isNoWar = true;
//         rep(j,n){
//             if(x[j] >= i) isNoWar = false;
//         }
//         rep(j,m){
//             if(y[j] < i) isNoWar = false;
//         }
//         if(isNoWar){
//             out("No War");
//             return 0;
//         }
//     }
//     out("War");

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
  int n,m,x,y;
  cin >> n >> m >> x >> y;
  vi xx(n), yy(m);
  rep(i,n) cin >> xx[i];
  rep(i,m) cin >> yy[i];
  sort(all(xx));
  sort(all(yy));
  bool isWar = false;
  reps(i,x,y + 1){
    if(xx.back() < i && yy[0] >= i)isWar = true;
  }
  if(isWar) out("No War");
  else out("War"); 
}