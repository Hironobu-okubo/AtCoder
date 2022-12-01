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

template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }

// int main(){
//   string s;
//   cin >> s;
//   bool isSplit = false;
//   string ss = "";
//   (s[6] == '1') ? (ss += "1") : (ss += "0");
//   (s[3] == '1') ? (ss += "1") : (ss += "0");
//   (s[1] == '1' || s[7] == '1') ? (ss += "1") : (ss += "0");
//   (s[4] == '1') ? (ss += "1") : (ss += "0");
//   (s[2] == '1' || s[8] == '1') ? (ss += "1") : (ss += "0");
//   (s[5] == '1') ? (ss += "1") : (ss += "0");
//   (s[9] == '1') ? (ss += "1") : (ss += "0");
//   string sss = "";
//   (s[6] == '0') ? (sss += "0") : (sss += "1");
//   (s[3] == '0') ? (sss += "0") : (sss += "1");
//   (s[1] == '0' && s[7] == '0') ? (sss += "0") : (sss += "1");
//   (s[4] == '0') ? (sss += "0") : (sss += "1");
//   (s[2] == '0' && s[8] == '0') ? (sss += "0") : (sss += "1");
//   (s[5] == '0') ? (sss += "0") : (sss += "1");
//   (s[9] == '0') ? (sss += "0") : (sss += "1");
//   if(s[0] == '0'){
//     rep(left,6){
//       reps(right,left + 1,7){
//         if(ss[left] == '1' && ss[right] == '1' && (right - left >= 2)){
//           bool isZero = true;
//           reps(i,left + 1,right){
//             if(sss[i] == '1') isZero = false;
//           }
//           if(isZero) isSplit = true;
//         }
//       }
//     }
//   }
//   // out(sss);
//   // out(ss);
//   YesNo(isSplit);
// }


int main(){
  string s;
  cin >> s;
  bool isSplit = false;

  string ss;
  s[6] == '0' ? ss += '0' : ss += '1';
  s[3] == '0' ? ss += '0' : ss += '1';
  (s[1] == '0' && s[7] == '0') ? ss += '0' : ss += '1';
  s[4] == '0' ? ss += '0' : ss += '1';
  (s[2] == '0' && s[8] == '0') ? ss += '0' : ss += '1';
  s[5] == '0' ? ss += '0' : ss += '1';
  s[9] == '0' ? ss += '0' : ss += '1';
  if(ss.find("101") != string::npos) isSplit = true;
  if(ss.find("1001") != string::npos) isSplit = true;
  if(ss.find("10001") != string::npos) isSplit = true;
  if(ss.find("100001") != string::npos) isSplit = true;
  if(ss.find("1000001") != string::npos) isSplit = true;
  if(s[0] != '0') isSplit = false;
  YesNo(isSplit);
}