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

// int main(){
//   int h,w,sy,sx,gy,gx;
//   cin >> h >> w >> sy >> sx >> gy >> gx;
//   sy--; sx--; gy--; gx--;

//   vs s(h);
//   rep(i,h) cin >> s[i];
//   vvi dist(h,vi(w,-1));
//   vi dx = {1,0,-1,0};
//   vi dy = {0,1,0,-1};

//   dist[sy][sx] = 0;
//   deque<pii> q;
//   q.pb(mp(sy,sx));

//   while(!q.empty()){
//     pii pos = q.front();
//     int y = pos.first;
//     int x = pos.second;
//     q.pop_front();

//     rep(i,4){
//       int yy = y + dy[i];
//       int xx = x + dx[i];
//       if(dist[yy][xx] == -1 && s[yy][xx] == '.'){
//         q.pb(mp(yy,xx));
//         dist[yy][xx] = dist[y][x] + 1;
//       }
//     }
//   }
//   out(dist[gy][gx]);
// }


int main(){
  int n,m;
  cin >> n >> m;
  vvi s(n);
  rep(i,m) {
    int a,b;
    cin >> a >> b;
    a--;b--;
    s[a].pb(b);
    s[b].pb(a);
  }
  vb visited(n,false);
  vi cnt(n,-1);
  cnt[0] = 0;
  visited[0] = true;
  queue<int> q;
  q.push(0);
  while(!q.empty()){
    int pos = q.front();
    q.pop();
    rep(i,s[pos].size()){
      if(visited[s[pos][i]] == false){
        visited[s[pos][i]] = true;
        q.push(s[pos][i]);
        cnt[s[pos][i]] = cnt[pos] + 1;
      }
      
    }
  }
  rep(i,n) out(cnt[i]);
}