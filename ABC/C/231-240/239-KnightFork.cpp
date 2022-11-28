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

ll dis(ll x1,ll y1, ll x, ll y){
  ll ans = (x1 - x) * (x1 - x) + (y1 - y) * (y1 - y);
  return ans;
}

int main(){
  ll x1,x2,y1,y2;
  cin >> x1 >> y1 >> x2 >> y2;

  vi dx = { -2,-1,1,2 };
  vi dy = { -2,-1,1,2 };

  bool isFive = false;

  for(auto x : dx){
    for(auto y : dy){
      ll ans = dis(x1,y1,x1 + x,y1 + y);
      if(ans == 5){
        ll ans1 = dis(x1 + x,y1 + y,x2,y2);
        if(ans1 == 5) isFive = true;
      }
    }
  }
  YesNo(isFive);
}