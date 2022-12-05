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

bool desc_asc(pii& left, pii& right) {
  if (left.first == right.first) {
    return left.second < right.second;
  } else {
    return right.first < left.first;
  }
}

int main(){
  int n,m;
  cin >> n >> m;
  vvc a(2 * n,vc(m));
  rep(i,2 * n){
    rep(j,m){
      cin >> a[i][j];
    }
  }
  vector<pii> rank;
  rep(i,2 * n) rank.pb({0,i});
  rep(i,m){
    rep(k,n){
      if(a[rank[2 * k].second][i] == 'G' && a[rank[2 * k + 1].second][i] == 'C') rank[2 * k].first++;
      else if(a[rank[2 * k].second][i] == 'C' && a[rank[2 * k + 1].second][i] == 'P') rank[2 * k].first++;
      else if(a[rank[2 * k].second][i] == 'P' && a[rank[2 * k + 1].second][i] == 'G') rank[2 * k].first++;
      else if(a[rank[2 * k].second][i] == 'G' && a[rank[2 * k + 1].second][i] == 'P') rank[2 * k + 1].first++;
      else if(a[rank[2 * k].second][i] == 'C' && a[rank[2 * k + 1].second][i] == 'G') rank[2 * k + 1].first++;
      else if(a[rank[2 * k].second][i] == 'P' && a[rank[2 * k + 1].second][i] == 'C') rank[2 * k + 1].first++;
    }
    sort(rank.begin(),rank.end(),desc_asc);
  }
  rep(i, 2 * n) out(rank[i].second + 1);
}