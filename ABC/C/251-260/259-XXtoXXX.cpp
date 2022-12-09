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
using vvs = vector<vs>;
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

vector<pair<char,int>> runLengthEncoding(string s){
  char cur = s[0];
  int cnt = 1;
  vector<pair<char,int>> vec;
  reps(i,1,s.size()){
    if(s[i] == cur) cnt++;
    else {
      vec.pb({cur,cnt});
      cur = s[i];
      cnt = 1;
    }  
  }
  vec.pb({cur,cnt});
  return vec;
}

bool solve(string S,string T){
  auto s = runLengthEncoding(S);
  auto t = runLengthEncoding(T);
  bool canEqual = true;
  if(s.size() != t.size()) {
    canEqual = false;
    return canEqual;
  }

  rep(i,s.size()){
    if(s[i].first != t[i].first){
      canEqual = false;
      return canEqual;
    }
    else if(s[i].second > t[i].second){
      canEqual = false;
    }
    else if(1 < t[i].second && s[i].second == 1){
      canEqual = false;
    }
  }
  return canEqual;
}

int main(){
  string s,t;
  cin >> s >> t;
  bool canEqual = solve(s,t);
  YesNo(canEqual);
}