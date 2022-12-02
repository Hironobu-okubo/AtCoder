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

// struct MyPair {
//   int x = 0;
//   string y = "init";
// };

// int main(){
//   MyPair p = { 1234,"Hello" };
//   out(p.x);
//   out(p.y);
//   MyPair q;
//   out(q.x);
//   out(q.y);
// }

  // struct NumString {
  //   int length;
  //   string s;
    
  //   NumString(int num){
  //     out("constructer called");

  //     s = to_string(num);
  //     length = s.size();
  //   }
  // };

  // int main(){
  //   NumString num(12345);
  //   out(num.s);
  //   out(num.length);
  // }

  // struct MyPair{
  //   int x; 
  //   string y;

  //   MyPair(){
  //     out("constructer called");
  //   }

  //   MyPair(const MyPair &old){
  //     out("copy constructer called");
  //     x = old.x + 1;
  //     y = old.y + "new";
  //   }
  // };
  
  // int main(){
  //   MyPair p;
  //   p.x = 12345;
  //   p.y = "Hello";
  //   out(p.x);
  //   out(p.y);

  //   MyPair q = p;
  //   out(q.x);
  //   out(q.y);
  // }

  struct MyPair {
    int x;
    string y;

    MyPair operator+ (const MyPair &old){
      MyPair ret;
      ret.x = old.x + x;
      ret.y = old.y + y;
      return ret;
    }
  };

  int main(){
    MyPair a = {123,"hello"};
    MyPair b = {456,"world"};

    MyPair c = a + b;
    out(c.x);
    out(c.y);
  }