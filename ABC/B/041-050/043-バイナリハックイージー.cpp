// int main(){
//     string s;
//     cin >> s;
//     vector<char> a;
//     rep(i,s.size()){
//       if(s[i] == 'B' && a.size() != 0){
//         a.pop_back();
//       }
//       if(s[i] == '1' || s[i] == '0') a.pb(s[i]);
//     }
//     rep(i,a.size()) cout << a[i];
//     cout << endl;
// }

// /*
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   string s;
//   cin >> s;

//   string ans ="";

//   for (int i = 0; i < s.length(); i++) {
//     if(s[i] == '0'){
//       ans += "0";
//     }else if(s[i] == '1'){
//       ans += "1";
//     }else if(s[i] == 'B' && ans.length() != 0){
//       ans.erase(ans.length() - 1);
//     }
//   }

//   cout << ans << endl;
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
  string s, ans = "";
  cin >> s;
  rep(i,s.size()){
    if(s[i] == '0') ans += '0';
    else if(s[i] == '1') ans += '1';
    else{
      if(ans.size() != 0) ans.pop_back();
    }
  }
  out(ans);
}



