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

// vi visited;
// vvi g;
// int n,m;
// vi ans;
// bool isPath = false;

// void dfs(int pos, int n){
//   visited[pos] = 1;
//   rep(i,g[pos].size()){
//     int nxt = g[pos][i];
//     if(visited[nxt] == 0){
//       if(!isPath) ans.pb(nxt);
//       if(nxt == n) isPath = true;
//       dfs(nxt,n); 
//     }
//   }
//   if(!isPath) ans.pop_back();
//   return;
// }

// int main(){
//   cin >> n >> m;
//   vi a(m + 1),b(m + 1);
//   visited.resize(n + 1,0);
//   g.resize(n + 1);
//   rrep(i,m){
//     cin >> a[i] >> b[i];
//     g[a[i]].pb(b[i]);
//     g[b[i]].pb(a[i]);
//   }
//   ans.pb(1);
//   dfs(1,n);
//   rep(i,ans.size()) cout << ans[i] << " ";
// }

int n;
vvi s;
vb visited;
vi path;

void dfs(int num, vvi &s){
  visited[num] = true;
  path.pb(num);
  rep(i,s[num].size()){
    int nxt = s[num][i];
    if(visited[nxt] == false){
      dfs(nxt,s);
    }
  }
  if(path[path.size() - 1] != n - 1) path.pop_back();
  return;
}

int main(){
  int m;
  cin >> n >> m;
  s.resize(n);
  rep(i,m) {
    int a,b;
    cin >> a >> b;
    a--;b--;
    s[a].pb(b);
    s[b].pb(a);
  }
  visited.resize(n,false);
  dfs(0,s);
  rep(i,path.size()) cout << path[i] + 1 << " ";
  out("");
}