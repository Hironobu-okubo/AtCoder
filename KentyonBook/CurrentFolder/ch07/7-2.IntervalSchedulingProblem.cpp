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

template<class T> void chmin(T& a,T b){
  if(a > b){
    a = b;
  }
}

template<class T> void chmax(T& a,T b){
  if(a < b){
    a = b;
  }
}

bool cmp(const pii &a, const pii &b){
  return a.second < b.second;
}

int main(){
  int N;
  cin >> N;
  vector<pii> inter(N);
  rep(i,N) cin >> inter[i].first >> inter[i].second;
  sort(all(inter),cmp);
  // rep(i,N) cout << inter[i].first << " " << inter[i].second << " ";
  // 貪欲に選ぶ
  int res = 0;
  int current_end_time = 0;
  rep(i,N){
    // 最後に選んだ区間と被るのは除く
    if(inter[i].first < current_end_time) continue;
    res++;
    current_end_time = inter[i].second;
  }
  out(res);
}