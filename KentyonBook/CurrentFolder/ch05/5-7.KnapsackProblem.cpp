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


// template<class T> void chmin(T& a,T b){
//   if(a > b){
//     a = b;
//   }
// }

// template<class T> void chmax(T& a,T b){
//   if(a < b){
//     a = b;
//   }
// }

// int main(){
//   int N, W;
//   cin >> N >> W;
//   vi weight(N), value(N);
//   rep(i,N) cin >> weight[i] >> value[i];
//   vvi dp(N + 1,vi(W + 1,0));
//   rep(i,N){
//     rep(w,W + 1){
//       if(w - weight[i]){
//         chmax(dp[i + 1][w], dp[i][w - weight[i]] + value[i]);
//       }

//       chmax(dp[i + 1][w],dp[i][w]);
//     }
//   }
//   out(dp[N][W]);
// }

int main(){
  int N,W;
  N = 6;
  W = 9;
  vi weight = {2,1,3,2,1,5};
  vi value = {3,2,6,1,3,85};
  vvi dp(N + 1,vi(W + 1,0));

  rep(i,N){
    rep(w,W + 1){
      if( w - weight[i] >= 0){
        chmax(dp[i + 1][w],dp[i][w - weight[i]] + value[i]);
      }
      chmax(dp[i + 1][w],dp[i][w]);
    }
  }
  out(dp[N][W]);
}