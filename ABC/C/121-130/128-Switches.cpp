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

int main(){
  int n,m;
  cin >> n >> m;
  vi k(m),p(m);
  vvi s(m);
  rep(i,m){
    cin >> k[i];
    rep(j,k[i]){
      int tmp;
      cin >> tmp;
      s[i].pb(tmp);
    }
  }
  rep(i,m) cin >> p[i];

  int ans = 0;
  rep(i,(1 << n)){
    int cnt = 0;
    rep(j,m){
      int sum = 0;
      rep(l,s[j].size()){
        if(i & (1 << (s[j][l] - 1))){
          sum++;
        }
      }
      if(sum % 2 == p[j]) cnt++;
    }
    if(cnt == m) ans++;
  }
  out(ans);
}