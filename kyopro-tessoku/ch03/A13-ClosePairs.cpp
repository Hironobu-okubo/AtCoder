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

// bool isOk(int num,int mid ,int k,vi a){
//   if(a[mid] - a[num] > k) return true;
//   else return false;
// }

// int check(int num, vi a,int k){
//   int left = num;
//   int right = a.size();
//   int mid;
//   while(right - left > 1){
//     mid = left + (right - left) / 2;
//     if(isOk(num,mid,k,a)) right = mid;
//     else left = mid;
//   }
//   return right;
// }

// int main(){
//   int n,k;
//   cin >> n >> k;
//   vi a(n);
//   rep(i,n) cin >> a[i];

//   ll sum = 0;
//   rep(i,n){
//     int r = check(i,a,k);
//     sum += (r - i - 1);
//   }
//   out(sum);
// }

int main(){
  int n,k;
  cin >> n >> k;
  vll a(n);
  rep(i,n) cin >> a[i];
  vll r(n);
  rep(i,n){
    if(i == 0) r[i] = 0;
    else r[i] = r[i - 1];
  
    while(r[i] < n - 1 && a[r[i] + 1] - a[i] <= k) r[i]++;
  }
  ll ans = 0;
  rep(i,n) ans += ( r[i] - i );
  out(ans);
  
}