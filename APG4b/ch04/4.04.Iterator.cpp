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

int main(){
  // vi a = {3,1,5,6,7,2,4};

  // auto itr1 = a.begin();
  // itr1 = itr1 + 2;
  // auto itr2 = itr1 + 4;

  // out(*itr1);
  // out(*itr2);
  // vi a = {1,2,3,5};

  // auto itr = find(all(a),3);
  
  // if(itr == a.end()){
  //   out("Not Found");
  // }
  // else{
  //   out(*itr);
  //   int idx = distance(a.begin(), itr);
  //   out(idx);
  // }

  vi a1 = {1,3,4,5,9,10};
  auto itr = find_if(all(a1),[](int x){return (x % 2 == 0); });
  if(itr == a1.end()){
    out("not found");
  }
  else{
    out(*itr);
  }
}