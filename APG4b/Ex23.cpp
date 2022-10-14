// #include <bits/stdc++.h>
// using namespace std;
// /* alias */
// using ull = unsigned long long;
// using ll = long long;
// using vi = vector<int>;
// using vl = vector<long>;
// using vll = vector<long long>;
// using vvi = vector<vi>;
// using vvl = vector<vl>;
// using vvll = vector<vll>;
// using vs = vector<string>;
// using pii = pair<int, int>;
// /* define short */
// #define pb push_back
// #define mp make_pair
// #define all(obj) (obj).begin(), (obj).end()
// #define YESNO(bool) if(bool){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
// #define yesno(bool) if(bool){cout<<"yes"<<endl;}else{cout<<"no"<<endl;}
// #define YesNo(bool) if(bool){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}
// /* REP macro */
// #define reps(i, a, n) for (ll i = (a); i < (ll)(n); ++i)
// #define rep(i, n) reps(i, 0, n)
// #define rrep(i, n) reps(i, 1, n + 1)
// #define repd(i,n) for(ll i=n-1;i>=0;i--)
// #define rrepd(i,n) for(ll i=n;i>=1;i--)
// #define out(x) cout << x << endl

// int main(){
//     int n;
//     cin >> n;
//     vi a(n);
//     rep(i,n) cin >> a[i];
//     map<int, int> cnt;
//     for(int x : a){
//         if(cnt.count(x)) cnt.at(x)++;
//         else cnt[x] = 1;
//     }
//     int max_cnt = 0;
//     int ans = -1;
//     for(int x : a){
//         if(max_cnt < cnt.at(x)){
//             max_cnt = cnt.at(x);
//             ans = x;
//         }
//     }
//     cout << ans << " " << max_cnt << endl;
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

int main(){
  int N;
  cin >> N;
  vi A(N);
  rep(i,N){
    cin >> A[i];
  }
  map<int,int> mode;
  for(auto i : A){
    if(mode[i] != 0 ){
      mode[i] += 1;
    }
    else{
      mode[i] = 1;
    }
  }
  int max_num = 0;
  int max_mode = -1;
  for(auto i : A){
    if(max_num < mode[i]){
      max_num = mode[i];
      max_mode = i;
    }
  }
  cout << max_mode << ' ' << max_num << endl;
}