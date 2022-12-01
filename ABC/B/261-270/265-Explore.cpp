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
using vc = vector<char>;
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

template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }

// int main(){
//   int n,m;
//   ll t;
//   cin >> n >> m >> t;
//   vll a(n,0);
//   reps(i,1,n) cin >> a[i];
//   map<ll,ll> xy;
//   rep(i,m){
//     ll x,y;
//     cin >> x >> y;
//     xy.insert(mp(x,y));
//   }

//   reps(i,1,n){
//     // cout << "i:" << i << " t:" << t << " ";
//     if(t <= a[i]){out("No"); return 0;}
//     t -= a[i];
//     // out(xy[i + 2]);
//     t += xy[i + 1];
//     // out("");
//   }
//   out("Yes");

// }

int main(){
  ll n,m,t;
  cin >> n >> m >> t;
  vi a(n - 1);
  rep(i,n-1) cin >> a[i];
  map<int,int> ma;
  rep(i,m){
    int x,y;
    cin >> x >> y;
    x--;
    ma[x] = y;
  }
  rep(i,n-1){
    t += ma[i];
    t -= a[i];
    if(t <= 0){
      out("No");
      return 0;
    }
  }
  out("Yes");
}