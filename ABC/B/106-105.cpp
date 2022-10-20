
// int main(){
//     int n;
//     cin >> n;
//     int count = 0;
//     for(int i = 1; i <= n; i += 2){
//         int cnt = 0;
//         for(int j = 1; j <= i; j += 2){
//             if(i % j == 0) cnt++;
//         }
//         if(cnt == 8){
//             count++;
//         }
//     }
//     out(count);
// }


// /*
// int main(){
//     int n;
//     cin >> n;
//     int isdiv8 = 0;
//     for(int i = 1; i <= n; i += 2){
//         int count = 0;
//         rrep(j,i){
//             if(i % j == 0) count++;
//         }
//         if(count == 8) isdiv8++;
//     }
//     out(isdiv8);

// }
// */

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
  int n;
  cin >> n;
  int sum = 0;
  for(int i = 1; i <= n; i += 2){
    int cnt = 0;
    rrep(j,i){
      if(i % j == 0) cnt++;
    }
    if(cnt == 8) sum++;
  }
  out(sum);
}
