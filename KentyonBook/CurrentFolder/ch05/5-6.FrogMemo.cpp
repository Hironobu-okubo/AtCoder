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

// int N;
// vi h,dp;

// int rec(int i){
//   if(dp[i] < INF32) return dp[i];

//   if(i == 0) return 0;

//   int res = INF32;

//   chmin(res,rec(i - 1) + abs(h[i] - h[i - 1]));
  
//   return dp[i] = res;
// }

// int main(){
//   cin >> N;
//   h.resize(N);
//   rep(i,N) cin >> h[i];

//   dp.assign(N,INF32);

//   out(rec(N - 1));
// }

vi ans;
vi h = {2,9,4,5,1,6,10};

int rec(int i){
    if(ans[i] < INF32) return ans[i];

    if(i == 0) return 0;

    int res = INF32;

    chmin(res,rec(i - 1) + abs(h[i] - h[i - 1]));

    if(i > 1) chmin(res,rec(i - 2) + abs(h[i] - h[i - 2]));

    return ans[i] = res;
  }

int main(){
  int N;
  N = 7;
  ans.assign(N,INF32);
  out(rec(N - 1));
}