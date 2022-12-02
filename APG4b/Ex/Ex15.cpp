// #include <bits/stdc++.h>
// using namespace std;
 
// // 1人のテストの点数を表す配列から合計点を計算して返す関数
// // 引数 scores: scores.at(i)にi番目のテストの点数が入っている
// // 返り値: 1人のテストの合計点
// int sum(vector<int> scores) {
//   // ここにプログラムを追記
//   int total = 0;
//   for(int i = 0; i < scores.size(); i++){
//     total += scores.at(i);
//   }
//   return total;
  
// }
 
// // 3人の合計点からプレゼントの予算を計算して出力する関数
// // 引数 sum_a: A君のテストの合計点
// // 引数 sum_b: B君のテストの合計点
// // 引数 sum_c: C君のテストの合計点
// // 返り値: なし
// void output(int sum_a, int sum_b, int sum_c) {
//   // ここにプログラムを追記
//   int budget = sum_a * sum_b * sum_c;
//   cout << budget << endl;
// }
 
// // -------------------
// // ここから先は変更しない
// // -------------------
 
// // N個の入力を受け取って配列に入れて返す関数
// // 引数 N: 入力を受け取る個数
// // 返り値: 受け取ったN個の入力の配列
// vector<int> input(int N) {
//   vector<int> vec(N);
//   for (int i = 0; i < N; i++) {
//     cin >> vec.at(i);
//   }
//   return vec;
// }
 
// int main() {
//   // 科目の数Nを受け取る
//   int N;
//   cin >> N;
 
//   // それぞれのテストの点数を受け取る
//   vector<int> A = input(N);
//   vector<int> B = input(N);
//   vector<int> C = input(N);
 
//   // それぞれの合計点を計算
//   int sum_A = sum(A);
//   int sum_B = sum(B);
//   int sum_C = sum(C);
 
//   // プレゼントの予算を出力
//   output(sum_A, sum_B, sum_C);
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


// 1人のテストの点数を表す配列から合計点を計算して返す関数
// 引数 scores: scores.at(i)にi番目のテストの点数が入っている
// 返り値: 1人のテストの合計点
int sum(vector<int> scores) {
  // ここにプログラムを追記
  int sum = 0;
  rep(i,scores.size()){
    sum += scores.at(i);
  }
  return sum;
}
 
// 3人の合計点からプレゼントの予算を計算して出力する関数
// 引数 sum_a: A君のテストの合計点
// 引数 sum_b: B君のテストの合計点
// 引数 sum_c: C君のテストの合計点
// 返り値: なし
void output(int sum_a, int sum_b, int sum_c) {
  // ここにプログラムを追記
  int budget = sum_a * sum_b * sum_c;
  out(budget);
}
 
// -------------------
// ここから先は変更しない
// -------------------
 
// N個の入力を受け取って配列に入れて返す関数
// 引数 N: 入力を受け取る個数
// 返り値: 受け取ったN個の入力の配列
vector<int> input(int N) {
  vector<int> vec(N);
  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }
  return vec;
}
 
int main() {
  // 科目の数Nを受け取る
  int N;
  cin >> N;
 
  // それぞれのテストの点数を受け取る
  vector<int> A = input(N);
  vector<int> B = input(N);
  vector<int> C = input(N);
 
  // それぞれの合計点を計算
  int sum_A = sum(A);
  int sum_B = sum(B);
  int sum_C = sum(C);
 
  // プレゼントの予算を出力
  output(sum_A, sum_B, sum_C);
}