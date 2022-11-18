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

// int main(){
//   int n;
//   cin >> n;
//   vs s(n);
//   bool flag = true;
//   rep(i,n) {
//     cin >> s[i];
//     if((s[i][0] != 'H' && s[i][0] != 'D' && s[i][0] != 'C' && s[i][0] != 'S') || (s[i][1] != 'A' && s[i][1] != 'T' && s[i][1] != 'J' && s[i][1] != 'Q' && s[i][1] != 'K' &&  s[i][1] != '2'&& s[i][1] != '3' && s[i][1] != '4'&& s[i][1] != '5' && s[i][1] != '6' && s[i][1] != '7'&& s[i][1] != '8'&& s[i][1] != '9'))  flag = false;
//   }
//   rep(i,n){
//     rep(j,n){
//       if(i != j){
//         if(s[i] == s[j]) flag =false;
//       }
//     }
//   }
//   YesNo(flag);
// }

int main(){
  int n;
  cin >> n;
  vs s(n);
  rep(i,n) cin >> s[i];
  bool flag = true;

  string s1 = "HDCS";
  string s2 = "A23456789TJQK";
  rep(i,n){
    if(!count(all(s1),s[i][0]) || !count(all(s2),s[i][1])) flag = false;
  }
  YesNo(flag);

  rep(i,n){
    rep(j,n){
      if(i != j){
        if(s[i] == s[j]) flag = true;
      }
    }
  }
}