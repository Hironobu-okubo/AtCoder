// int main(){
// 	int n;
// 	cin >> n;
// 	vi t(n);
// 	rep(i,n){
// 		cin >> t[i];
// 	}
// 	int m;
// 	cin >> m;
// 	int p, x;
// 	vi tmp(n);
// 	rep(i,m){
// 		rep(k,n){
// 			tmp[k] = t[k];
// 		}
// 		int sum = 0;
// 		cin >> p >> x;
// 		tmp[p - 1] = x;
// 		rep(j,n){
// 			sum += tmp[j];
// 		}
// 		out(sum);
// 	}

// }
// /*
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int n,m;
//   cin >> n;
//   vector<int> vec1(n);
//   for(int i = 0; i < n; i++){
//     cin >> vec1[i];
//   }
//   cin >> m;
//   vector<int> vec2(n);
//   int p,x;
//   for(int j = 0; j < m; j++){
//     vec2 = vec1;
//   	cin >> p >> x;
//     vec2[p - 1] = x;
//     cout << accumulate(vec2.begin(),vec2.end(),0) << endl;
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
	vi t(n);
	rep(i,n) cin >> t[i];
	int m;
	cin >> m;
	vi p(m),x(m);
	rep(i,m){
		cin >> p[i] >> x[i];
		int tmp = t[p[i] - 1];
		t[p[i] - 1] = x[i];
		int sum = 0;
		rep(i,n){
			sum += t[i];
		}
		out(sum);
		t[p[i] - 1] = tmp;
	}
}