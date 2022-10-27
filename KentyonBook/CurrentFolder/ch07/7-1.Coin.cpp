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

int main(){
  vi value = {500,100,50,10,5,1};
  int N, X;
  N = 6;
  cin >> X;
  vi a(N);
  rep(i,N) cin >> a[i];

  //貪欲法
  int result = 0;
  rep(i,N){
    int add = X / value[i];
    if(add > a[i]) add = a[i];
    X -= value[i] * add;
    result += add;
    // cout << value[i] << "円玉の枚数:" << add << "枚" << ", " << "残りの値段:" << X << endl;
  }
  out(result);
}