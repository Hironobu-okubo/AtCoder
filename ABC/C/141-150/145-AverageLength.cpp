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

ll distance(int x1, int y1, int x2, int y2){
  ll dis = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
  return dis;
}

int main(){
  int n;
  cin >> n;
  vi x(n),y(n);
  rep(i,n) cin >> x[i] >> y[i];
  vi a(n);
  rep(i,n) a[i] = i;
  double sum = 0;
  int cnt = 0;
  do{
    rep(i,n - 1){
      ll dis = distance(x[a[i]],y[a[i]],x[a[i + 1]],y[a[i + 1]]);
      double dist = sqrt(dis);
      sum += dist;
    }
    cnt++;
  } while(next_permutation(all(a)));
  double ans = sum / cnt;
  cout << fixed << setprecision(15) << ans << endl;
}