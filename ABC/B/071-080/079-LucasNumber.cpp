
// int main(){
// 	int n;
// 	cin >> n;
// 	vll l(n + 1);
// 	l[0] = 2;
// 	l[1] = 1;
// 	reps(i,2,n + 1){
// 		l[i] = l[i - 2] + l[i - 1];
// 	}
// 	out(l[n]);
// }

// /*
// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//   int n,i;
//   cin >> n;
//   vector<long long> luka(n + 1);
//   luka[0] = 2;
//   luka[1] = 1;
//   for(i = 2; i <= n; i++){
//   	luka[i] = luka[i - 1] + luka[i - 2];
//   }
//   cout << luka[n] << endl;
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
	vl l(n + 1);
	l[0] = 2;
	l[1] = 1;
	reps(i,2,n + 1){
		l[i] = l[i - 1] + l[i - 2];
	}
	out(l[n]);
}