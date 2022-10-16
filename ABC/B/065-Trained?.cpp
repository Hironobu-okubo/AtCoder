// int main(){
// 	int n;
// 	cin >> n;
// 	vi a(n);
// 	vector<bool> isOn(n,true);
// 	rep(i,n) cin >> a[i];
// 	int nxt = 0,count = 0;
// 	while(true){
// 		if(isOn[nxt]){
// 			isOn[nxt] = false;
// 			nxt = a[nxt] - 1;
// 			count++;
// 			//cout << nxt << " ";
// 			if(nxt == 1) break;
// 		}
// 		else{
// 			out("-1");
// 			exit(0);
// 		}
		
// 	}
// 	out(count);
// }

// /*
// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//   int n;
//   cin >> n;
//   vector<int> a(n);
//   for(int i = 0; i < n; i++){
//   	cin >> a.at(i);
//   }
//   int i = 0,count = 0;
//   while(true){
//   	i = a.at(i) - 1;
//     count++;
//     if(i == 1){
//       cout << count << endl;
//       exit(0);
//     }
//     if(count == n){
//       cout << "-1" << endl;
//       exit(0);
//     }
//   }
  
//   return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int n;
//   cin >> n;
//   vector<int> a(n);
//   for(int i = 0; i < n; i++){
//   	cin >> a.at(i);
//   }
//   int i = 0,count = 0;
//   while(true){
//   	i = a.at(i) - 1;
//     count++;
//     if(i == 1){
//       cout << count << endl;
//       exit(0);
//     }
//     if(count == n){
//       cout << "-1" << endl;
//       exit(0);
//     }
//   }
  
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
  int n;
  cin >> n;
  vi a(n);
  rep(i,n) cin >> a[i];
  int cur = 0;
  rep(i,101010){
    if(a[cur] == 2){
      out(i + 1);
      return 0;
    }
    cur = a[cur] - 1;
  }
  out("-1");
}