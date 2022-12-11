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
using vvs = vector<vs>;
using vc = vector<char>;
using vvc = vector<vc>;
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

void EnumerateCombination(
      const int *first, const int *const end, const int r,
      std::function<void(const std::vector<int> &)> callback) {
    using T = int;

    std::vector<int> pre;
    pre.resize(r);

    struct Stack {
      int iPre;
      const T *_f;
      int r;
    };
    std::stack<Stack> _stack;

    _stack.push({0, first, r});

    while (_stack.empty() == false) {
      auto curr = _stack.top();
      _stack.pop();

      if (curr.r == 0) {
        callback(pre);
        continue;
      }

      if (curr._f + curr.r == end) {
        pre.resize(curr.iPre);  
        pre.insert(pre.end(), curr._f, end);  
        callback(pre);
        continue;
      }

      if (curr._f == end) {
        continue;
      }

      _stack.push({curr.iPre, curr._f + 1, curr.r});
      pre[curr.iPre] = *curr._f;
      _stack.push({curr.iPre + 1, curr._f + 1, curr.r - 1});
    }
  }

int main()
{
  int n,k,d;
  cin >> n >> k >> d;
  int array[n];
  rep(i,n) cin >> array[i];

  vi s;

  auto callback = [&](const std::vector<int> &vec){
    ll sum = 0;
    for(auto i : vec) {
      sum += i;
    };
    s.pb(sum);
  };

  EnumerateCombination(array, array + n,k, callback);

  sort(all(s));
  ll ans = -1;
  rep(i,s.size()){
    if(s[i] % d == 0) ans = s[i];
  }
  out(ans);
}