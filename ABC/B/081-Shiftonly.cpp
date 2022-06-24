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
	int count = 0;
	while(true){
		rep(i,n){
			if(a[i] % 2 != 0){
				out(count);
				exit(0);
			}
			else a[i] = a[i] / 2;
		}
		count++;
	}
	out(count);
}

/*

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,count = 0,isloop = 1;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  
  while(true){
    for(int i = 0; i < n; i++){
      if(a[i] % 2 != 0 && count == 0){
        cout << "0" << endl;
        exit(0);
      }
  	  else if(a[i] % 2 != 0){
        isloop = 0;
        break;
      }
      else{
        a[i] = a[i] / 2;
      }
    }
    if(isloop == 0) break;
    count++;
  }
  cout << count << endl;
  return 0;
}
*/