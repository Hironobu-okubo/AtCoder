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
  int n;
  cin >> n;
  vvi aa(1501,vi(1501,0));
  rep(i,n){
    int x,y;
    cin >> x >> y;
    aa[x][y] += 1;
  }
  vvi sum(1501,vi(1501,0));
  rep(i,1501){
    rep(j,1501){
      if(j == 0) sum[i][j] = aa[i][j];
      else sum[i][j] = sum[i][j - 1] + aa[i][j];
    }
  }
  rep(i,1501){
    rep(j,1501){
      if(i == 0) break;
      else{
        sum[i][j] = sum[i - 1][j] + sum[i][j];
      }
    }
  }

  int q;
  cin >> q;
  rep(i,q){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int ans = sum[c][d];
    ans -= sum[a - 1][d];
    ans -= sum[c][b - 1];
    ans += sum[a - 1][b - 1];
    out(ans);
  }

}