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

// 解法1:シンプルにそれぞれのグループ和を求める

// int main(){
//   int n;
//   cin >> n;
//   vi w(n);
//   rep(i,n){
//     cin >> w[i];
//   }
//   int ans = INF32;
//   reps(i,1,n){
//     int sum1 = 0,sum2 = 0;
//     rep(j,i){
//       sum1 += w[j];
//     }
//     reps(j,i,n){
//       sum2 += w[j];
//     }
//     int dif = abs(sum2 - sum1);
//     ans = min(ans,dif);
//   }
//   out(ans);
// }


//　解法2:累積和を用いて求める

int main(){
  int n;
  cin >> n;
  vi w(n);
  int sum1 = 0;
  rep(i,n) cin >> w[i];
  reps(i,1,n) w[i] += w[i - 1];

  int ans = INF32;
  rep(i,n - 1){
    int sum1 = w[i];
    int sum2 = w[n - 1] - sum1;
    ans = min(ans,abs(sum1 - sum2));
  }
  out(ans);
}