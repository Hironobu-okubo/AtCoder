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
  int r,c;
  cin >> r >> c;
  int sy,sx;
  cin >> sy >> sx;
  int gy,gx;
  cin >> gy >> gx;
  vs grh(r + 1);
  rrep(i,r) cin >> grh[i];
  vi dist;
  int start = sx * c + sy;
  int goal = gy * c + gx;
  
  vvi g;
  rrep(i,r){
    rrep(j, c - 1){
      int idx1 = i * c + j;
      int idx2 = i * c + j + 1;
      if(grh[i][j] == '.' && grh[i][j + 1] == '.'){
        g[idx1].pb(idx2);
        g[idx2].pb(idx1);
      }
    }
  }
  // rrep(i,r){
  //   rrep(j,g.size()){
  //     cout << g[i][j] << " ";
  //   }
  //   out("");
  // }
}