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

void bubble(vs &a, int n){
  rep(i,n - 1){
    for(int j = n - 1; j > i; j--){
      if(a[j][1] < a[j - 1][1]){
        swap(a[j],a[j - 1]);
      }
    }
  }
}

void selection(vs &a, int n){
  rep(i,n){
    int minNum = i;
    reps(j,i,n){
      if(a[j][1] < a[minNum][1]) minNum = j;
    }
    if(a[minNum][1] < a[i][1]) swap(a[minNum],a[i]);
  }
}

void print(vs a, int n){
  rep(i,n){
    if(i > 0) cout << " ";
    cout << a[i];
  }
  cout << endl;
}

bool isStable(vs a1, vs a2, int n){
  rep(i,n){
    if(a1[i][0] != a2[i][0]) return false;
  }
  return true;
}

int main(){
  int n;
  cin >> n;
  vs a(n);
  rep(i,n) cin >> a[i];
  vs a1 = a;
  vs a2 = a;

  bubble(a1,n);
  print(a1,n);
  out("Stable");
  selection(a2,n);
  print(a2,n);
  if(isStable(a1,a2,n)) out("Stable");
  else out("Not stable");
}