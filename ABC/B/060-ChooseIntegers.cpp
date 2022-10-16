// int main(){
// 	int a, b, c;
// 	cin >> a >> b >> c;
// 	int num = 0;
// 	bool isAns = false;
// 	rrep(i,b){
// 		if(a * i % b == c) isAns = true;
// 	}
// 	YESNO(isAns);
// }

// /*
// #include <bits/stdc++.h>
// using namespace std;
 
// int main(){
//   int a,b,c;
//   cin >> a >> b >> c;
//   for(int i = 0; i < b; i++){
//   	if(a * i % b == c){
//     	cout << "YES" << endl;
//       exit(0);
//     }
//   }
//   cout << "NO";
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
	int a,b,c;
	cin >> a >> b >> c;
	int i = 1;
	bool isdis = false;
	vi vec;
	bool fin = true;
	while(fin){
		int tmp = i * a % b;
		rep(j,vec.size()){
			if(vec[j] == tmp){
				fin = false;
				break;
			}
		}
		vec.pb(tmp);
		if(tmp == c) {
			isdis = true;
			break;
		}
		i++;
	}
	YESNO(isdis);
}