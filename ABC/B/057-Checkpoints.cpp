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
	int n, m;
	cin >> n >> m;
	vi minN(n,INF32);
	int minNum;
	vi a(n),b(n),c(m),d(m);
	rep(i,n){
		cin >> a[i] >> b[i];
	}
	rep(i,m){
		cin >> c[i] >> d[i];
	}
	rep(i,n){
		rep(j,m){
			int tmp;
			tmp = abs(a[i] - c[j]) + abs(b[i] - d[j]);
			if(minN[i] > tmp){
				minN[i] = tmp;
				minNum = j + 1;
			}
		}
		out(minNum);
	}


}
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,m;
  cin >> n >> m;
  int a[n],b[n],c[m],d[m];
  for(int i = 0; i < n; i++){
  	cin >> a[i] >> b[i];
  }
  for(int i = 0; i < m; i++){
  	cin >> c[i] >> d[i];
  }
  for(int i = 0; i < n; i++){
  	int number;
    int min_dis = 1e9;
    for(int j = 0; j < m; j++){
    	int dis = abs(a[i] - c[j]) + abs(b[i] - d[j]);
        if(dis < min_dis){
      	  min_dis = dis;
          number = j + 1;
      }
    }
    cout << number << endl;
  }
      return 0;
}
*/