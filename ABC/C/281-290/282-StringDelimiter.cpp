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

int main(){
  int n;
  string s;
  cin >> n >> s; 
  queue<pii> p;
  int cnt = 0,cnt1 = 0,cnt2 = 0;
  rep(i,n){
    if(s[i] == '"' && cnt == 0) { cnt1 = i;cnt++; }
    else if(s[i] == '"' && cnt == 1) {
      cnt2 = i;
      p.push({cnt1,cnt2});
      cnt = 0;
    }
  }
  rep(i,n){
    if(i > p.front().second) p.pop();
    int q1,q2;
    if(!p.empty()){
      q1 = p.front().first;
      q2 = p.front().second;
    }
    else{
      q1 = -1;
      q2 = -1;
    }
    if(s[i] == ','){
      if(q1 <= i && i <= q2) continue;
      else s[i] = '.';
    }
  }
  out(s);
}