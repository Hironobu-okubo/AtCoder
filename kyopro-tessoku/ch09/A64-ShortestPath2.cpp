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

int main(){
  int n,m;
  cin >> n >> m;
  map<int,vector<pii>> adj;
  rep(i,m){
    int a,b,c;
    cin >> a >> b >> c;
    a--;b--;
    adj[a].pb({b,c});
    adj[b].pb({a,c});
  }
  priority_queue<pii,vector<pii>,greater<pii>> q;
  vb confirm(n,false);
  vi dist(n,INF32);
  dist[0] = 0;
  q.push({dist[0],0});
  while(!q.empty()){
    int pos = q.top().second;q.pop();

    if(confirm[pos] == true) continue;

    confirm[pos] = true;
    rep(i,adj[pos].size()){
      int to = adj[pos][i].first;
      int cost = adj[pos][i].second;
      if(dist[to] > cost + dist[pos]){
        dist[to] = cost + dist[pos];
        q.push({dist[to],to});
      }
    }
  }
  rep(i,n) {
    if(dist[i] == INF32) out("-1");
    else out(dist[i]);
  }
}