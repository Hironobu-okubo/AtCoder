// int main(){
// 	int n;
// 	cin >> n;
// 	string s;
// 	cin >> s;
// 	int maxLen = 0, len = 0;
// 	rep(i,n){
// 		if(s[i] == 'I'){
// 			len++;
// 		}
// 		else if(s[i] == 'D'){
// 			len--;
// 		}
// 		maxLen = max(maxLen,len);
// 	}
// 	out(maxLen);
// }
// /*
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   int n;
//   string s;
//   cin >> n >> s;
//   int now = 0, maximum = 0;
//   for(int i = 0; i < n; i++){
//   	if(s[i] == 'I') {
//       now++;
//       maximum = max(now,maximum);
//     }
//     else{
//       now--;
//     }
//   }
//   cout << maximum << endl;
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
using vc = vector<char>;
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
	string s;
	cin >> n >> s;
	int sum = 0, maxNum = 0;
	rep(i,n){
		if(s[i] == 'I'){
			sum++;
			maxNum = max(sum,maxNum);
		}
		else{
			sum--;
			maxNum = max(sum,maxNum);
		}
	}
	out(maxNum);
}
