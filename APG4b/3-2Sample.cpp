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
#define rrep(i, n) reps(i, 1, n + 1)
#define repd(i,n) for(ll i=n-1;i>=0;i--)
#define rrepd(i,n) for(ll i=n;i>=1;i--)
#define out(x) cout << x << endl

int main(){
    /*
    pair<string, int> p("abc",3);
    out(p.first);
    out(p.second);
    p.first = "hello";
    out(p.first);
    p = mp("a",1);
    out(p.first);
    tuple<int, string, bool> data(1,"a",true);
    get<2>(data) = false;
    out(get<1>(data));
    out(get<2>(data));
	*/
	pair<int, int> a(3,1);
	pair<int, int> b(2,10);
	if(a < b) out("a < b");
	else out("a >= b");
	pair<int, int> c(5,1);
	pair<int, int> d(5,10);
	if(c < d) out("c < d");
	else out("c >= d");
}

