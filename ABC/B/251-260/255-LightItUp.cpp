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

ll dis(ll x1, ll y1, ll x2, ll y2){
  ll dis1 =  (x1 - x2) * (x1 - x2); 
  ll dis2 = (y1 - y2) * (y1 - y2);
  ll ans = dis1 + dis2;
  return ans;
}

int main(){
  int n,k;
  cin >> n >> k;
  vi a(k);
  rep(i,k){
    int aa;
    cin >> aa;
    a[i] = aa - 1;
  }
  vector<ll> x(n),y(n);
  rep(i,n){
    ll xx,yy;
    cin >> xx >> yy;
    x[i] = xx;
    y[i] = yy;
  }
  vector<ll> minDis(n,INF64);
  for(auto i : a){
    rep(j,n){
      ll distance = dis(x[i],y[i],x[j],y[j]);
      if(minDis[j] > distance) minDis[j] = distance;
    }
  }
  sort(all(minDis));
  double ans = minDis[minDis.size() - 1];
  cout << fixed << setprecision(12) << sqrt((double)ans) << endl;
}
