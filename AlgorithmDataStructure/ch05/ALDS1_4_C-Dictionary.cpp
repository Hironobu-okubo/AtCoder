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

int getChar(char ch){
  if(ch == 'A') return 1;
  else if(ch == 'C') return 2;
  else if(ch == 'G') return 3;
  else if(ch == 'T') return 4;
  else return 0;
}

ll getKey(string str){
  ll sum = 0, p = 1;
  rep(i,str.size()){
    sum += p * (getChar(str[i]));
    p *= 5;
  }
  return sum;
}

int h1(int key){ return key % M;}

int h2(int key){ return 1 + ( key % (M - 1));}

int find(string str){
  ll key;
  key = getKey(str);
  ll i = 0;
  while(true){
    h = (h1(key) + i * h2(key)) % M;
    if()
  }
}

int main(){
  out(getKey("ATCG"));
}