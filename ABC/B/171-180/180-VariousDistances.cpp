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

// int main(){
//   cout << fixed << setprecision(15);
  
//   int n;
//   cin >> n;
//   vll x(n);
//   rep(i,n) cin >> x[i];
//   ll man = 0, cheby = 0;
//   ll eucrid = 0;
//   rep(i,n){
//     man += abs(x[i]);
//   }
//   rep(i,n){
//     eucrid += x[i] * x[i];
//   }
//   rep(i,n){
//     chmax(cheby,abs(x[i]));
//   }
//   cout << man << endl;
//   cout << (double)sqrt(eucrid) << endl;
//   cout << cheby << endl;
// }

int main(){

  int n;
  cin >> n;
  vll x(n);
  rep(i,n) cin >> x[i];
  ll man = 0, cheby = 0;
  double eucrid = 0.0;
  rep(i,n){
    man += abs(x[i]);
  }
  rep(i,n){
    eucrid += x[i] * x[i];
  }
  eucrid = sqrt(eucrid);
  rep(i,n){
    chmax(cheby,abs(x[i]));
  }
  cout << man << endl;
  printf("%.12lf\n",eucrid);
  cout << cheby << endl;
}