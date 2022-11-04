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

// int main(){
//   int N;
//   cin >> N;
//   vi a(N);
//   rep(i,N) cin >> a[i];
//   vi dp(N,INF32);

//   dp[0] = 0;
//   reps(i,1,N){
//     if(i == 1) dp[i] = abs(a[i] - a[i - 1]);
//     else dp[i] = min((dp[i - 1] + abs(a[i] - a[i - 1])),(dp[i - 2] + abs(a[i] - a[i - 2])));
//   }
//   out(dp[N - 1]);
// }

int main(){
  int N;
  N = 7;
  vi h = {2,9,4,5,1,6,10};
  vi ans(N);
  rep(i,N){
    if(i == 0) ans[i] = 0;
    else if(i == 1) ans[i] = abs(h[i] - h[i - 1]);
    else{
      int minh = min(abs(h[i] - h[i - 1]) + ans[i - 1],abs(h[i] - h[i - 2]) + ans[i - 2]);
      ans[i] = minh;
    }
    out(ans[i]);
  }

}