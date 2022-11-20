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

int main(){
  set<int> se {1,2,3,4,2}; // 1,2,3,4のみが格納される

  set<int> se1(se); // コピーコンストラクタ。seをコピーするので{1,2,3,4}を持つse1を生成する

  auto itr = se.begin(); // 指定番目の要素を取り出すことはできず、イテレータを使って各要素にアクセスする必要がある
  cout << *itr << endl;
  itr++;
  cout << *itr << endl;

  se.insert(5); // データを追加する。ソートされた位置に挿入される
  auto r = se.insert(5); // insertはpair<iterator,bool>を返す
  cout << r.second << endl;

  auto c = se.erase(5); // 削除したデータの個数を返す 0 or 1
  set<int> st{1,2,3,4,5,6};
  auto first = st.find(2);
  auto last = st.find(4);
  st.erase(first,last); //要素2.3を削除

  auto iitr = se.find(4); // 要素4を検索しその値を返す
  cout << se.count(2) << endl; // 指定値の数を返す（重複を許さないため0 or 1を返す）
  
  if( st.empty()) cout << "empty" << endl; // 集合が空かどうか返す

  cout << st.size() << endl; // 集合の要素の数を返す

  set<pair<int,int>> setp;
  setp.insert({1,2});
  setp.insert({1,2});
  setp.emplace(1,2);

}