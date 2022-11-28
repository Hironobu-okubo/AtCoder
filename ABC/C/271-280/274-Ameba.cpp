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

// vi s;
// int cnt;

// void countParent(int x, int &cnt){
//   if(s[x] == 0) return;
//   cnt++;
//   countParent(s[x],cnt);
// }

// int main(){
//   int n;
//   cin >> n;
//   vi a(n + 1);
//   s.resize(2 * n + 2);
//   s[0] = 1;
//   rrep(i,n){
//     cin >> a[i];
//     s[2 * i] = a[i];
//     s[2 * i + 1] = a[i];
//   }
//   rrep(i,2 * n + 1){
//     int cnt = 0;
//     countParent(i,cnt);
//     out(cnt);
//   }
// }

int main(){
  int n;
  cin >> n;
  vi a(n);
  rep(i,n) cin >> a[i];

  vvi G(2 * n + 5);
  rep(i,n){
    G[a[i] - 1].pb(2 * (i + 1) - 1);
    G[a[i] - 1].pb(2 * (i + 1));
  }

  vi dist(2 * n + 1,-1);
  queue<int> q;
  q.push(0);
  dist[0] = 0;
  while(!q.empty()){
    int pos = q.front();
    q.pop();
    rep(i,G[pos].size()){
      int to = G[pos][i];
      if(dist[to] == -1){
        dist[to] = dist[pos] + 1;
        q.push(to);
      }
    }
  }
  rep(i,2 * n + 1){
    out(dist[i]);
  }
}