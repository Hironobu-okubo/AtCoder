// #include <bits/stdc++.h>
// using namespace std;
 
 
// // 参照渡しを用いて、呼び出し側の変数の値を変更する
// void saiten(vector<vector<int>> &A, int &correct_count, int &wrong_count) {
//   // 呼び出し側のAの各マスを正しい値に修正する
//   // Aのうち、正しい値の書かれたマスの個数を correct_count に入れる
//   // Aのうち、誤った値の書かれたマスの個数を wrong_count に入れる
//   // ここにプログラムを追記
//   for(int i = 0; i < 9; i++){
//     for(int j = 0; j < 9; j++){
//       if(A.at(i).at(j) != (i + 1) * (j + 1)){
//         A.at(i).at(j) = (i + 1) * (j + 1);
//         wrong_count++; 
//       }
//       else{
//         correct_count++; 
//       }
//     }
//   }
// } 
// // -------------------
// // ここから先は変更しない
// // -------------------
// int main() {
//   // A君の回答を受け取る
//   vector<vector<int>> A(9, vector<int>(9));
//   for (int i = 0; i < 9; i++) {
//     for (int j = 0; j < 9; j++) {
//       cin >> A.at(i).at(j);
//     }
//   }
 
//   int correct_count = 0; // ここに正しい値のマスの個数を入れる
//   int wrong_count = 0;   // ここに誤った値のマスの個数を入れる
 
//   // A, correct_count, wrong_countを参照渡し
//   saiten(A, correct_count, wrong_count);
 
//   // 正しく修正した表を出力
//   for (int i = 0; i < 9; i++) {
//     for (int j = 0; j < 9; j++) {
//       cout << A.at(i).at(j);
//       if (j < 8) cout << " ";
//       else cout << endl;
//     }
//   }
//   // 正しいマスの個数を出力
//   cout << correct_count << endl;
//   // 誤っているマスの個数を出力
//   cout << wrong_count << endl;
// }
// #include <bits/stdc++.h>
// using namespace std;


// // 参照渡しを用いて、呼び出し側の変数の値を変更する
// void saiten(vector<vector<int>> &A, int &correct_count, int &wrong_count) {
//   // 呼び出し側のAの各マスを正しい値に修正する
//   // Aのうち、正しい値の書かれたマスの個数を correct_count に入れる
//   // Aのうち、誤った値の書かれたマスの個数を wrong_count に入れる
//   // ここにプログラムを追記
//   for(int i = 0; i < 9; i++){
//     for(int j = 0; j < 9; j++){
//       if(A.at(i).at(j) != (i + 1) * (j + 1)){
//         A.at(i).at(j) = (i + 1) * (j + 1);
//         wrong_count++; 
//       }
//       else{
//         correct_count++; 
//       }
//     }
//   }
// } 
// // -------------------
// // ここから先は変更しない
// // -------------------
// int main() {
//   // A君の回答を受け取る
//   vector<vector<int>> A(9, vector<int>(9));
//   for (int i = 0; i < 9; i++) {
//     for (int j = 0; j < 9; j++) {
//       cin >> A.at(i).at(j);
//     }
//   }
 
//   int correct_count = 0; // ここに正しい値のマスの個数を入れる
//   int wrong_count = 0;   // ここに誤った値のマスの個数を入れる
 
//   // A, correct_count, wrong_countを参照渡し
//   saiten(A, correct_count, wrong_count);
 
//   // 正しく修正した表を出力
//   for (int i = 0; i < 9; i++) {
//     for (int j = 0; j < 9; j++) {
//       cout << A.at(i).at(j);
//       if (j < 8) cout << " ";
//       else cout << endl;
//     }
//   }
//   // 正しいマスの個数を出力
//   cout << correct_count << endl;
//   // 誤っているマスの個数を出力
//   cout << wrong_count << endl;
// }
// 提出情報

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

// 参照渡しを用いて、呼び出し側の変数の値を変更する
void saiten(vvi &A,int &correct_count,int &wrong_count) {
  rep(i,9){
    rep(j,9){
      if(A[i][j] == (i + 1) * (j + 1)) correct_count++;
      else{
        A[i][j] = (i + 1) * (j + 1);
        wrong_count++;
      }
    }
  }
  // ここにプログラムを追記
}
 
 
// -------------------
// ここから先は変更しない
// -------------------
int main() {
  // A君の回答を受け取る
  vector<vector<int>> A(9, vector<int>(9));
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cin >> A.at(i).at(j);
    }
  }
 
  int correct_count = 0; // ここに正しい値のマスの個数を入れる
  int wrong_count = 0;   // ここに誤った値のマスの個数を入れる
 
  // A, correct_count, wrong_countを参照渡し
  saiten(A, correct_count, wrong_count);
 
  // 正しく修正した表を出力
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cout << A.at(i).at(j);
      if (j < 8) cout << " ";
      else cout << endl;
    }
  }
  // 正しいマスの個数を出力
  cout << correct_count << endl;
  // 誤っているマスの個数を出力
  cout << wrong_count << endl;
}