
// int main(){
//     int n,x;
//     cin >> n >> x;
//     vi a(n);
//     int minDonuts = INF32,count = 0,total = x;
//     rep(i,n){
//         cin >> a[i];
//         minDonuts = min(minDonuts,a[i]);
//         total -= a[i];
//         count++;
//     }
//     while(true){
//         total -= minDonuts;
//         if(total < 0) break;
//         count++;
//     }
//     out(count);
// }


// /*
// int main(){
//     int n,x,count = 0,min = 1000;
//     cin >> n >> x;
//     vi m(n);
//     rep(i,n){
//         cin >> m[i];
//         x -= m[i];
//         count++;
//         if(m[i] < min) min = m[i];
//     }
//     while(x >= min){
//         x -= min;
//         count++;
//     }
//     out(count);
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
  int n,x;
  cin >> n >> x;
  vi m(n);
  int count = 0, minPrice = INF32,minNum = 0;
  rep(i,n){
    cin >> m[i];
    x -= m[i];
    count++;
    if(minPrice > m[i]){
      minPrice = m[i];
      minNum = i;
    }
  }
  while(true){
    x -= m[minNum];
    if(x < 0) break;
    count++;
  }
  out(count);
}