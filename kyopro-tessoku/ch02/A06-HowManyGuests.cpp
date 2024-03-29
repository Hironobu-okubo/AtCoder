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
#define repp(i,n) reps(i, 0, n + 1)1
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
//   int n,q;
//   cin >> n >> q;
//   vi sum(n);
//   rep(i,n){
//     int a;
//     cin >> a;
//     if(i == 0) sum[i] = a;
//     else sum[i] = sum[i - 1] + a;
//   }
  
//   rep(i,q){
//     int ans = 0;
//     int l,r;
//     cin >> l >> r;
//     if(l == 1) ans = sum[r - 1];
//     else ans = sum[r - 1] - sum[l - 2];
//     out(ans);
//   }
// }
  

int main(){
  int n,q;
  cin >> n >> q;
  vi a(n);
  rep(i,n) cin >> a[i];
  vi sum(n + 1,0);
  rep(i,n){
    sum[i + 1] = sum[i] + a[i];
  }
  rep(i,q){
    int l,r;
    cin >> l >> r;
    out(sum[r] - sum[l - 1]);
  }
}