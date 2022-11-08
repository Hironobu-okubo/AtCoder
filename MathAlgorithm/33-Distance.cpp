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
#define MOD 1000000007

template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }

int main(){
  ll ax,ay,bx,by,cx,cy;
  cin >> ax >> ay >> bx >> by >> cx >> cy;

  ll bax = ax - bx;
  ll bay = ay - by;
  ll bcx = cx - bx;
  ll bcy = cy - by;
  ll cax = ax - cx;
  ll cay = ay - cy;
  ll cbx = bx - cx;
  ll cby = by - cy;

  int pattern = 2;
  if(bax * bcx + bay * bcy < 0LL) pattern = 1;
  if(cax * cbx + cay * cby < 0LL) pattern = 3;

  double ans = 0.0;
  if (pattern == 1) ans = sqrt(bax * bax + bay * bay);
  if (pattern == 3) ans = sqrt(cax * cax + cay * cay);
  if (pattern == 2){
    double s = abs(bax * cay - bay * cax);
    double bclength = sqrt(bcx * bcx + bcy * bcy);
    ans = s / bclength;
  }
  printf("%.12lf\n",ans);
}