
// int main(){
//     int a, b, c, x;
//     cin >> a >> b >> c >> x;
//     int count = 0;
//     rep(i,a + 1){
//         rep(j,b + 1){
//             rep(k,c + 1){
//                 int sum = 500 * i + 100 * j + 50 * k;
//                 if(sum == x) count++;
//             }
//         }
//     }   
//     out(count);
// }


// /*
// int main(){
//     int a,b,c,x,count = 0;
//     cin >> a >> b >> c >> x;
//     reps(i,0,a + 1){
//         reps(j,0,b + 1){
//             reps(k,0,c + 1){
//                 if(500 * i + 100 * j + 50 * k == x) count++; 
//             }
//         }
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
  int a,b,c,x;
  cin >> a >> b >> c >> x;
  int sum = 0,num = 0;
  repp(i,a){
    repp(j,b){
      repp(k,c){
        if(sum = i * 500 + j * 100 + k * 50 == x){
          num++;
        }
      }
    }
  }
  out(num);
}