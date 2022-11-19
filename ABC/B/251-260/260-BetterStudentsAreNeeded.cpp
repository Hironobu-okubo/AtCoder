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
using vb = vector<bool>;
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
  int n,x,y,z;
  cin >> n >> x >> y >> z;
  vi a(n),b(n);
  rep(i,n) cin >> a[i];
  rep(i,n) cin >> b[i];
  vb isPass(n,false);

  rep(i,x){
    int maxMath = -1,maxMathNum;
    repd(j,n){
      if(!isPass[j]){
        if(maxMath <= a[j]){
          maxMath = a[j];
          maxMathNum = j;
        }
      }
    }
    // cout << maxMath << " ";
    isPass[maxMathNum] = true;
  }
  // rep(i,n){
  //   if(isPass[i]) cout << i + 1 << " ";
  // }
  // out("");
  rep(i,y){
    int maxEng = -1,maxEngNum;
    repd(j,n){
      if(!isPass[j]){
        if(maxEng <= b[j]){
          maxEng = b[j];
          maxEngNum = j;
        }
      }
    }
    isPass[maxEngNum] = true;
  }
  // rep(i,n){
  //   if(isPass[i]) cout << i + 1 << " ";
  // }
  // out("");
  rep(i,z){
    int maxSum = -1, maxSumNum;
    repd(j,n){
      if(!isPass[j]){
        if(maxSum <= (a[j] + b[j])){
          maxSum = a[j] + b[j];
          maxSumNum = j;
        }
      }
    }
    isPass[maxSumNum] = true;
  }

  // rep(i,n){
  //   if(isPass[i]) cout << i + 1 << " ";
  // }
  // out("");
  rep(i,n) { if(isPass[i]) out(i + 1); }
}