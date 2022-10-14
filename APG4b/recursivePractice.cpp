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

// int sum_range(int a, int b){
//   if(a == b) return a;
//   return sum_range(a,b - 1) + b;
//   }

// int main(){
//   out(sum_range(3,7));
// }

// int array_sum_from_i(vi &data, int i){
//   if(data.size() == i){
//     return 0;
//   }

//   int s = array_sum_from_i(data, i + 1);
//   return data[i] + s;
// }

// int array_sum(vi &data){
//   return array_sum_from_i(data,0);
// }

// int main() {
//   vector<int> a = {0, 3, 9, 1, 5};
//   cout << array_sum(a) << endl;   // 0 + 3 + 9 + 1 + 5 = 18
// }

// bool has_divisor(int N, int i){
//   if(i == N) return false;
//   if(N % i == 0) return true;
//   return has_divisor(N,i + 1);
// }

// bool is_prime(int N){
//   if(N == 1) return false;
//   if(N == 2) return true;
//   else{
//     return !has_divisor(N,2);
//   }
// }

// int main() {
//   cout << is_prime(1) << endl;  // 0
//   cout << is_prime(2) << endl;  // 1
//   cout << is_prime(12) << endl; // 0
//   cout << is_prime(13) << endl; // 1
//   cout << is_prime(57) << endl; // 0
// }
 
// x番の組織について、子組織からの報告書が揃った時刻を返す
// childrenは組織の関係を表す2次元配列(参照渡し)
int complete_time(vector<vector<int>> &children, int x) {
  // (ここに追記して再帰関数を実装する)
}
 
// これ以降の行は変更しなくてよい
 
int main() {
  int N;
  cin >> N;
 
  vector<int> p(N);  // 各組織の親組織を示す配列
  p.at(0) = -1;  // 0番組織の親組織は存在しないので-1を入れておく
  for (int i = 1; i < N; i++) {
    cin >> p.at(i);
  }
 
  // 組織の関係から2次元配列を作る(理解しなくてもよい)
  vector<vector<int>> children(N);  // ある組織の子組織の番号一覧  // N×0の二次元配列
  for (int i = 1; i < N; i++) {
    int parent = p.at(i);  // i番の親組織の番号
    children.at(parent).push_back(i);  // parentの子組織一覧にi番を追加
  }
 
  // 0番の組織の元に報告書が揃う時刻を求める
  cout << complete_time(children, 0) << endl;
}