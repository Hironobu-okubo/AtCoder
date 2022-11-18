
// int main(){
//     int n;
//     cin >> n;
//     vi v(n),c(n);
//     int sum = 0;
//     rep(i,n){
//         cin >> v[i];
//     }
//     rep(i,n){
//         cin >> c[i];
//     }
//     rep(i,n){
//         if(v[i] > c[i]){
//             sum += v[i] - c[i];
//         }
//     }
//     out(sum);
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
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }
//定数
#define INF32 2147483647 
#define INF64 9223372036854775807 
#define MOD 1000000007 


// int main() {
//   int N;
//   vi V(20), C(20);
// 	cin >> N;
// 	rep(i,N) cin >> V[i];
// 	rep(i,N) cin >> C[i];
 
// 	int ans = 0;
// 	reps(msk, 0, 1 << N) {
//     // cout << msk << " ";
// 		int X = 0, Y = 0;
// 		rep(i,N) if (msk & (1 << i)) {
//       cout << i << " ";
// 			X += V[i];
// 			Y += C[i];
// 		}
// 		chmax(ans, X - Y);
// 	}
// 	cout << ans << endl;
// }

int main(){
  int n;
  cin >> n;
  vi v(n),c(n);
  rep(i,n) cin >> v[i];
  rep(i,n) cin >> c[i];

  int ans = 0; 
  reps(msk,0,1 << n){
    int x = 0, y = 0;
    rep(i,n) if (msk & (1 << i)){
      // bitset<4> s(i);
      // bitset<4> ss(msk);
      // cout << s << " " << ss << " " << v[i] << endl;
      x += v[i];
      y += c[i];
    }
    ans = max(ans,x - y);
  }
  out(ans);
}