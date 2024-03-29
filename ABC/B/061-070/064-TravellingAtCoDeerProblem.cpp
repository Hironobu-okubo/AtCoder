// int main(){
// 	int n;
// 	cin >> n;
// 	vi a(n);
// 	rep(i,n){
// 		cin >> a[i];
// 	}
// 	sort(all(a));
// 	out(a[a.size() - 1] - a[0]);

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
//   sort(a.begin(),a.end());
//   int maxnum = *max_element(begin(a),end(a));
//   int minnum = *min_element(begin(a),end(a));
//   int diff = maxnum - minnum;
//   cout << diff << endl;
//   */

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
  int minnum = INF32;
  int maxnum = 0;
  rep(i,n){
    int tmp;
    cin >> tmp;
    minnum = min(tmp,minnum);
    maxnum = max(tmp,maxnum);
  }
  out(maxnum - minnum);
}