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
  string S,T;
  cin >> S >> T;

  // DPテーブル定義
  vvi dp(S.size() + 1, vi(T.size() + 1,INF32));

  // DP初期条件
  dp[0][0] = 0;

  // DPループ
  rep(i,S.size() + 1){
    rep(j,T.size() + 1){
      // 変更操作
      if(i > 0 && j > 0){
        if(S[i] == T[j]){
          chmin(dp[i][j],dp[i - 1][j - 1]);
        }
        else{
          chmin(dp[i][j],dp[i - 1][j - 1] + 1);
        }
      }
      // 削除操作
      if(i > 0) chmin(dp[i][j], dp[i - 1][j] + 1);

      // 挿入操作
      if(j > 0) chmin(dp[i][j], dp[i][j - 1] + 1);
    }
  }
  out(dp[S.size()][T.size()]);
}