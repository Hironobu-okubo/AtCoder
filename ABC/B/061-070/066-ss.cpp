// int main(){
// 	string s;
// 	cin >> s;
// 	ll ans = 0;
// 	reps(i,2,s.size()){
// 		if(i % 2 == 0){
// 			string a = s.substr(0,i / 2);
// 			string b = s.substr(i / 2, i / 2);
// 			if(a == b){
// 				ans = max(ans,i);
// 			}
// 		}
// 	}
// 	out(ans);
// }
// /*
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int n;
//   cin >> n;
//   int x = -1,y = -1;
//   int ans = 0;
//   vector<int> a(n),b(n);
//   for(int i = 0; i < n; i++){
//   	cin >> a[i] >> b[i];
//     if(x < a[i]){
//       x = a[i];
//       y = b[i];
//       ans = x + y;
//     }
//   }
//   cout << ans;
//   return 0;
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
  string s;
  cin >> s;
  while(true){
    s.pop_back();
    if(s.size() % 2 == 0){
      int mid = s.size() / 2 ;
      string first = s.substr(0,mid);
      string second = s.substr(mid,mid);
      if(first == second){
        out(s.size());
        return 0;
      }
    }
  }
}