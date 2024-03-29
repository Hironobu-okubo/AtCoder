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

// int main(){
//   int n;
//   cin >> n;
//   bool isNickname = true;
//   vvs nick(n,vs(2));
//   rep(i,n){
//     string s,t;
//     cin >> s >> t;
//     nick[i][0] = s;
//     nick[i][1] = t;
//   }
//   rep(i,n){
//     int isNick = 1;
//     int isName = 1;
//     rep(j,n){
//       if(i != j){
//         if(nick[i][0] == nick[j][0] || nick[i][0] == nick[j][1]) isNick = 0;
//         if(nick[i][1] == nick[j][0] || nick[i][1] == nick[j][1]) isName = 0;
//       }
//       // cout << isNick << " " << isName << endl;
//     }
//     if(isNick == 0 && isName == 0) isNickname = false;
//   }
//   YesNo(isNickname);

// }

int main(){
  int n;
  cin >> n;
  vs s(n),t(n);
  map<string,int> sec,fir;
  bool isNick = true;
  rep(i,n) {
    cin >> s[i] >> t[i];
    sec[s[i]]++;
    fir[t[i]]++;
  }
  rep(i,n){
    if(sec[s[i]] != 1 && fir[t[i]] != 1) isNick = false;
  }
  YesNo(isNick);
}