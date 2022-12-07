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

bool travel(int x1, int y1, int x2, int y2,int num){
  int dis = abs(x1 - x2 + y1 - y2);
  if(dis <= num){
    if(dis % 2 == 0 && num % 2 == 0) return true;
    else if(dis % 2 == 1 && num % 2 == 1) return true; 
    else return false;
  }
  else return false;
}

int main(){
  int n;
  cin >> n;
  vi t(n),x(n),y(n);
  rep(i,n) cin >> t[i] >> x[i] >> y[i];
  int cntx = 0,cnty = 0,cntnum = 0;
  bool isTravel = true;
  rep(i,n){
    if(!travel(cntx,cnty,x[i],y[i],t[i] - cntnum)) isTravel = false;
    cntx = x[i];
    cnty = y[i];
    cntnum = t[i];
  }
  YesNo(isTravel);
}