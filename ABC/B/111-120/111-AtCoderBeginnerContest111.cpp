
// int main(){
//     int n;
//     cin >> n;
//     reps(i,n,1000){
//         string nn = to_string(i);
//         if(nn[0] == nn[1] && nn[1] == nn[2]){
//             out(i);
//             return 0;
//         }
//     }
// }


// /*
// int main(){
//     int n;
//     cin >> n;
//     for(int i = n; i <= 999; i++){
//         string stri = to_string(i);
//         if(stri[0] == stri[1] && stri[1] == stri[2]){
//             out(stri);
//             exit(0);
//         }
//     }
//     return 0;
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
  reps(i,0,10){
    int start = i * 100 + i * 10 + i;
    int end = (i + 1) * 100 + (i + 1) * 10 + (i + 1);
    if(start < n && n <= end) out(end);
  }
}