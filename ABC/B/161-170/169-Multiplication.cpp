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
using vvs = vector<vs>;
using vc = vector<char>;
using vvc = vector<vc>;
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
ll infl = 1LL << 60;
ll mul(ll a, ll b) { if (a == 0) return 0; if (infl / a < b) return infl; return min(infl, a * b); }

// int main(){
//   ll n;
//   cin >> n;
//   ll ans = 1;
//   ll flag = pow(10,18);
//   rep(i,n){
//     ll a;
//     cin >> a;
//     ans = mul(ans,a);
//   }
//   if(ans > flag) out("-1");
//   else out(ans);
// }

int main(){
  ll n;
  cin >> n;
  ll ans = 1;
  ll mx = 1e18;
  vll a(n);
  rep(i,n){
    cin >> a[i];
    if(a[i] == 0) { out(0); return 0; }
  }
  rep(i,n){
    if((mx + 1) / ans < a[i] || mx < ans * a[i]){ out(-1); return 0; }
    ans *= a[i];
  }
  out(ans);
}