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

int main(){
  int h,w,n;
  cin >> h >> w >> n;
  vi a(n),b(n),c(n),d(n);
  rep(i,n){
    int aa,bb,cc,dd;
    cin >> aa >> bb >> cc >> dd;
    a[i] = aa - 1;
    b[i] = bb - 1;
    c[i] = cc - 1;
    d[i] = dd - 1;
  } 
  
  vvi sum(h,vi(w,0));
  rep(i,n){
    sum[a[i]][b[i]]++;
    if(c[i] != h - 1 && d[i] != w - 1) sum[c[i] + 1][d[i] + 1]++;
    if(c[i] != h - 1) sum[c[i] + 1][b[i]]--;
    if(d[i] != w - 1) sum[a[i]][d[i] + 1]--;
  }
  
  vvi ans(h,vi(w,0));
  rep(i,h){
    rep(j,w){
      if(j == 0) ans[i][j] = sum[i][j];
      else ans[i][j] = ans[i][j - 1] + sum[i][j];
    }
  }
  rep(j,w){
    reps(i,1,h){
      ans[i][j] += ans[i - 1][j];
    }
  }
  rep(i,h){
    rep(j,w){
      cout << ans[i][j] << " ";
    }
    out("");
  }
}