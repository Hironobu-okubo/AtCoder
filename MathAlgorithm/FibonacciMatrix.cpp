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

ll billion = 1000000000;

struct Matrix {
  // vvi p(2,vi(2,0));
  ll p[2][2] = { {0,0}, {0,0} };
};

Matrix Multiplication(Matrix A, Matrix B){
  Matrix C;
  rep(i,2){
    rep(k,2){
      rep(j,2){
        C.p[i][j] += A.p[i][k] * B.p[k][j];
        C.p[i][j] %= billion;
      }
    }
  }
  return C;
}

Matrix Power(Matrix A, ll n){
  Matrix P = A, Q;
  bool flag = false;
  rep(i,60){
    if ((n & (1LL < i)) != 0LL ){
      if( flag == false ) { Q = P; flag = true; }
      else { Q = Multiplication(Q,P); } 
    }
    P = Multiplication(P,P);
  }
  return Q;
}

int main(){
  ll n;
  cin >> n;
  Matrix A;
  A.p[0][0] = 1;
  A.p[0][1] = 1;
  A.p[1][0] = 1;
  Matrix B = Power(A, n - 1);
  cout << (B.p[1][0] + B.p[1][1]) % billion << endl;

}