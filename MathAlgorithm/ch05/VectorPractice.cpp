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

// 配列の総和を求める
vi v = { 1,2,3,4,5 };

// // 方法1（値渡し）
// int sumVector(vi v){
//   int sum = 0;
//   rep(i,v.size()){
//     sum += v[i];
//   }
//   return sum;
// }

// 方法2（参照渡し）
int sumVector(const vi& v){
  int sum = 0;
  rep(i,v.size()){
    sum += v[i];
  }
  return sum;
}

int main(){
  // vi v1 = { 1,2,3 };
  // vi v2 = { 4,5,6,7 };
  // 末尾に配列を追加

  // // 方法1  
  // int sizev2 = v2.size();
  // v2.resize(sizev2 + v1.size());
  // rep(i,v1.size()){
  //   v2[sizev2 + i] = v1[i];
  // }
  
  // // 方法2
  // rep(i,v1.size()){
  //   v2.pb(v1[i]);
  // }

  // 方法3
  // copy(all(v1),back_inserter(v2));


  // 指定範囲をコピー
  // int a = 0, b = 2;

  // // 方法1
  // v2.resize(b - a);
  // rep(i,v2.size()){
  //   v2[i] = v1[i + a];
  // }

  // // 方法2
  // copy(v1.begin()+a,v1.begin()+b, v2.begin());

  // rep(i,v2.size()) cout << v2[i] << " ";

  
  out(sumVector(v));
}