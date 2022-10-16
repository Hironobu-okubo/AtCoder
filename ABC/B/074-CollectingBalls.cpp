// int main(){
// 	int n, k;
// 	cin >> n >> k;
// 	int sum = 0;
// 	rep(i,n){
// 		int x,minx;
// 		cin >> x;
// 		minx = min(x, k - x);
// 		sum += 2 * minx;
// 	}
// 	out(sum);

// }
// /*
// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//   int N, A;
//   cin >> N >> A;
//   cout << N * N - A << endl;
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
	int n,k;
	cin >> n >> k;
	vi x(n);
	rep(i,n) cin >> x[i];
	int sum = 0;
	rep(i,n){
		if(x[i] < (k - x[i])) sum += (x[i] * 2);
		else sum += ((k - x[i]) * 2);
	}
	out(sum);
}