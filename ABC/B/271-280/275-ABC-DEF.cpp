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
// #define MOD 1000000007

template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }

// int main(){
//   ll a,b,c,d,e,f;
//   cin >> a >> b >> c >> d >> e >> f;
//   ll fir,sec;
//   ll MOD = 998244353;

//   fir = ((a % MOD) * (b % MOD)) % MOD;
//   fir = (fir * (c % MOD)) % MOD;
//   sec = ((d % MOD) * (e % MOD)) % MOD;
//   sec = (sec * (f % MOD)) % MOD;
//   out((fir + MOD - sec) % MOD);
// }


int main(){
  ll a,b,c,d,e,f;
  cin >> a >> b >> c >> d >> e >> f;
  ll CONST = 998244353;;
  ll ans1 = 1,ans2 = 1;
  ans1 = ans1 * (a % CONST);
  ans1 = (ans1 * (b % CONST)) % CONST;
  ans1 = (ans1 * (c % CONST)) % CONST;
  ans2 = ans2 * (d % CONST);
  ans2 = (ans2 * (e % CONST)) % CONST;
  ans2 = (ans2 * (f % CONST)) % CONST;
  ll ans = ans1 - ans2;
  if(ans < 0) ans += CONST;
  out(ans);
}