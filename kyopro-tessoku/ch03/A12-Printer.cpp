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

// int n,k;
// vi a;

// bool check(int mid){
//   ll sum = 0;
//   rep(i,n){
//     sum += mid / a[i];
//   }
//   if(sum < k) return false;
//   return true;
// }

// int main(){
//   cin >> n >> k;
//   a.resize(n);
//   rep(i,n) cin >> a[i];

//   int left = 0, right = 1000000000;
//   while(right - left > 0){
//     int mid = (left + right) / 2;
//     bool ans = check(mid);
//     if(ans == false) left = mid + 1;
//     if(ans == true) right = mid;
//   }
//   out(left);
// }

ll n;
vll a(n);

ll check(ll num){
  ll sum = 0;
  rep(i,n){
    sum += num / a[i];
  }
  return sum;
}

int main(){
  ll k;
  cin >> n >> k;
  a.resize(n);
  rep(i,n) cin >> a[i];
  ll left = 1, right = 1000000000,mid;
  while(right - left > 0){
    mid = (left + right) / 2;
    ll num = check(mid);
    if(num < k) left = mid + 1;
    else right = mid;
  }
  out(left);
}
  