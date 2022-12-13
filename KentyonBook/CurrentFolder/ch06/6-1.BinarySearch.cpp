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

// int N = 8;
// vi a = { 3,5,8,10,14,17,21,39};

// int binary_search(int key){
//   int left = 0, right = a.size() - 1;
//   while(left <= right){
//     int mid = (right + left) / 2;
//     if(a[mid] == key) return mid;
//     else if(a[mid] > key) right = mid - 1;
//     else if(a[mid] < key) left = mid + 1;
//   }
//   return -1;
// }

// int main(){
//   out(binary_search(10));
//   // binary_search(10);
//   out(binary_search(100));
// }

int N = 8;
vi a = { 3,5,8,10,14,17,21,39};

int main(){
  int key;
  cin >> key;
  int left = 0;
  int right = N - 1;
  int mid;
  while(right - left >= 0){
    mid = (left + right) / 2;
    if(a[mid] == key) { out(mid); return 0; }
    else if(a[mid] > key) left = mid + 1;
    else if(a[mid] < key) right = mid - 1;
  }
  out(-1);
}