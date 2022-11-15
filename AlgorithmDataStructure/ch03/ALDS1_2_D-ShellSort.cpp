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

int cnt;
int l,n;
vi a,g;


void insertionSort(vi &a,int n,int g){
  for(int i = g; i < n; i++){
    int v = a[i];
    int j = i - g;
    while(j >= 0 && a[j] > v){
      a[j + g] = a[j];
      j -= g;
      cnt++;
    }
    a[j + g] = v;
  }
}

void ShellSort(vi &a,int n){
  for(int h = 1; ;){
    if( h > n ) break;
    g.pb(h);
    h = 3 * h + 1;
  }
  repd(i,g.size()){
    insertionSort(a,n,g[i]);
  }
}

int main(){
  cin >> n;
  a.assign(n,0);
  rep(i,n) cin >> a[i];
  cnt = 0;

  ShellSort(a,n);
  
  out(g.size());
  repd(i,g.size()){
    cout << g[i];
    if(i > 0) cout << " ";
  }
  cout << endl;
  out(cnt);
  rep(i,n) out(a[i]);
}