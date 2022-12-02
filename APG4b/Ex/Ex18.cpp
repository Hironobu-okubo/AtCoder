// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//   int N, M;
//   cin >> N >> M;
//   vector<int> A(M), B(M);
//   for (int i = 0; i < M; i++) {
//     cin >> A.at(i) >> B.at(i);
//   }
 
//   // ここにプログラムを追記
//   // (ここで"試合結果の表"の2次元配列を宣言)
//   vector<vector<char>> table(N, vector<char>(N, '-'));
//   for(int i = 0; i < M; i++){
//     A.at(i)--;
//     B.at(i)--;
//     table.at(A.at(i)).at(B.at(i)) = 'o';
//     table.at(B.at(i)).at(A.at(i)) = 'x';
//   }
  
  
  
//   for (int i = 0; i < N; i++) {
//     for (int j = 0; j < N; j++) {
//       cout << table.at(i).at(j);
//       if (j == N - 1) {
//         cout << endl;  // 行末なら改行
//       }
//       else {
//         cout << " ";  // 行末でないなら空白を出力
//       }
//     }
//   }
  
// }

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

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }
 
  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)
  vector<vector<char>> vec(N,vector<char>(N));
  rep(i,N){
    rep(j,N){
      vec[i][j] = '-';
    }
  }
  rep(i,M){
    vec[A[i] - 1][B[i] - 1] = 'o';
    vec[B[i] - 1][A[i] - 1] = 'x';
  }
  rep(i,N){
    rep(j,N){
      cout << vec[i][j];
      if(j != N - 1) cout << ' ';
    }
    cout <<  endl;
  }

}