
// int main(){
//     int n;
//     cin >> n;
//     set<int> se;
//     int a;
//     rep(i,n){
//         cin >> a;
//         se.insert(a);
//     }
//     out(se.size());
// }

// // /*
// // int main(){
// //     int n;
// //     cin >> n;
// //     vi d(n);
// //     rep(i,n){
// //         cin >> d[i];
// //     }
// //     sort(all(d));
// //     int count = 1;
// //     rep(i,n - 1){
// //         if(d[i] < d[i + 1]) count++;
// //     }
// //     out(count);
// // }*/




// // /*
// // int main(){
// //     int n,count = 0;
// //     cin >> n;
// //     vi a(n + 1);
// //     rep(i,n){
// //         cin >> a[i];
// //     }
// //     sort(all(a));
// //     rep(i,n){
// //         if(a[i] < a[i + 1]){
// //             count++;
// //         }
// //     }
// //     out(count);
// // }
// // */

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
  vi d(n);
  rep(i,n){
    cin >> d[i];
  }
  sort(all(d),greater<int>());
  int sum = 1, tmp = 0;
  reps(i,1,n){
    // cout << d[i] << " ";
    if(d[i] < d[i - 1]){
      sum++;
    }
  }
  out(sum);
}