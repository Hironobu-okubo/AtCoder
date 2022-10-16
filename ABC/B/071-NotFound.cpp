
// int main(){
// 	string s;
// 	cin >> s;
// 	bool isDic = false;
// 	string dic = "abcdefghijklmnopqrstuvwxyz";
// 	rep(i,dic.size()){
// 		bool isDic = false;
// 		rep(j,s.size()){
// 			if(dic[i] == s[j]){
// 				isDic = true;
// 				break;
// 			}
// 		}
// 		if(isDic) continue;
// 		else{
// 			out(dic[i]);
// 			exit(0);
// 		}
// 	}
// 	out("None");
// 	return 0;
// }
// /*
// #include <bits/stdc++.h>
// using namespace std;
 
// int main(){
//   string s;
//   cin >> s;
//   vector<bool> x(26,true);
//   for(int i = 0; i < s.size(); i++){
//   	x.at(s.at(i) - 'a') = false;
//   }
//   for(int i = 0; i < 26; i++){
//   	if(x.at(i)){
//       cout << char('a' + i) << endl;
//       return 0;
//     }
//   }
  
//        cout << "None" << endl;
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
	string alpha = "abcdefghijklmnopqrstuvwxyz";
	rep(i,alpha.size()){
		bool isAlpha = false; 
		rep(j,s.size()){
			if(alpha[i] == s[j]){
				isAlpha = true;
			}
		}
		if(!isAlpha){
			out(alpha[i]);
			return 0;
		}
	}
	out("None");
}
