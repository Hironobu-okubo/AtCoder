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
    cin >> n;
    vs s(n),t(m);
    rep(i,n) cin >> s[i];
    cin >> m;
    rep(i,m) cin >> t[i];
    int ans = 0;
    rep(i,n){
        int count = 0;
        rep(j,n){
            if(s[i] == s[j]) count++;
        }
        rep(k,m){
            if(s[i] == t[k]) count--;
        }
        ans = max(ans,count);
    }
    out(ans);
}






/*
int main(){
    int n,m,ans = 0;
    vs s(101);
    vs t(101);
    cin >> n;
    rep(i,n) cin >> s[i];
    cin >> m;
    rep(i,m) cin >> t[i];

    rep(i,n){
        int point = 0;
        rep(j,n) {
            if(s[i] == s[j]) point++;
        }
        rep(j,m){
            if(s[i] == t[j]) point--;
        }
        ans = max(ans,point);
        
    }
    out(ans);
}
*/