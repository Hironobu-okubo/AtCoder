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
  int h1,h2,h3,w1,w2,w3;
  cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;

  vvi s(3,vi(3));
  int ans = 0;
  rrep(i1,h1){
    rrep(i2,h1){
      s[0][0] = i1;
      s[0][1] = i2;
      s[0][2] = h1 - i1 -i2;
      if(s[0][2] <= 0) break;
      rrep(j1,h2){
        rrep(j2,h2){
          s[1][0] = j1;
          s[1][1] = j2;
          s[1][2] = h2 - j1 - j2;
          if(s[1][2] <= 0) break;
          rrep(k1,h3){
            rrep(k2,h3){
              s[2][0] = k1;
              s[2][1] = k2;
              s[2][2] = h3 - k1 - k2;
              if(s[2][2] <= 0) break;
              int cnt = 0;
              if(s[0][0] + s[0][1] + s[0][2] == h1) cnt++;
              if(s[0][0] + s[1][0] + s[2][0] == w1) cnt++;
              if(s[1][0] + s[1][1] + s[1][2] == h2) cnt++;
              if(s[0][1] + s[1][1] + s[2][1] == w2) cnt++;
              if(s[2][0] + s[2][1] + s[2][2] == h3) cnt++;
              if(s[0][2] + s[1][2] + s[2][2] == w3) cnt++;
              if(cnt == 6) ans++;
            }
          }
        }
      }
    }
  }
  out(ans);
}