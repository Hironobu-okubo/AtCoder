
// int main(){
//     int n, a, b;
//     cin >> n >> a >> b;
//     int sum = 0;
//     rep(i,n + 1){
//         int tmp = 0, rem = i;
//         while(rem != 0){
//             tmp += rem % 10;
//             rem = rem / 10;
//         }
//         if(tmp >= a && tmp <= b){
//             sum += i;
//         }
//     }
//     out(sum);
// }

// /*
// #include <bits/stdc++.h>
// using namespace std;
// using VI = vector<int>;
// typedef long long ll ;
// #define all(a) (a).begin(),(a).end()
// #define out(x) cout << x << endl
// #define rep(i, n) for(int i = 0; i < (int)(n); i++)
// #define repp(i, n) for(int i = 1; i <= (int)(n); i++)
// #define pb push_back

// int main(){
//     int n,a,b,tmp = 0,rem = 0,sum = 0;
//     cin >> n >> a >> b;
//     repp(i,n){
//         rem = i;
//         while(rem != 0){
//             tmp += rem % 10;
//             rem =  rem / 10;
            
//         }
//         if(tmp >= a && tmp <= b){
//             sum += i;
//         }
//         tmp = 0;
//     }
//     out(sum);
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
  int n, a, b;
  cin >> n >> a >> b;
  int sum = 0;
  rep(i,n + 1){
    int tmp = i, digitSum = 0;
    while(tmp){
      digitSum += tmp % 10;
      tmp /= 10;
    }
    //cout << digitSum << " ";
    if(digitSum >= a && digitSum <= b){
      sum += i;
    }
  }
  out(sum);
}