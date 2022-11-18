
// int main(){
//     int n,t,a;
//     cin >> n >> t >> a;
//     vi h(n);
//     rep(i,n){
//         cin >> h[i];
//     }
//     double minDif = INF32;
//     int minNum;
//     rep(i,n){
//         double temp = t - h[i] * 0.006;
//         double dif = abs(temp - a);
//         if(minDif > dif){
//             minDif = dif;
//             minNum = i + 1;
//         }
//     }
//     out(minNum);
// }



// /*
// int main(){
//     int n,t,a,minNum = 0;
//     cin >> n >> t >> a;
//     vi h(n);
//     double ave = INF32;
//     rep(i,n){
//         cin >> h[i];
//         double temp = t - h[i] * 0.006;
//         if(abs(temp - a) < ave){
//             ave = abs(temp - a);
//             minNum = i + 1;
//         }
//     }
//     out(minNum);
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
  int n,t,a;
  cin >> n >> t >> a;
  vi h(n);
  rep(i,n){
    cin >> h[i];
  }
  int minnum;
  double minh = INF32;
  rep(i,n){
    double temp = t - h[i] * 0.006;
    double h = abs(temp - a);
    if(minh > h){
      minh = h;
      minnum = i;
    }
  }
  out(minnum + 1);
}