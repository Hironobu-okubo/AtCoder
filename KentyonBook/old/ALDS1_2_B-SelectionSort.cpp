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
//関数
template <typename T> bool chmin(T& a, const T b) { if (a>b) { a=b; return 1; } return 0; }
template <typename T> bool chmax(T& a, const T b) { if (a<b) { a=b; return 1; } return 0; }

int main(){
    int n,minNum;
    cin >> n;
    vi a(n);
    rep(i,n) cin >> a[i];


    rep(i,n){
        minNum = i;
        reps(j,i,n){
            if(a[minNum] > a[j]){
                minNum = j;
            }
        }
        int tmp = a[i];
        a[i] = a[minNum];
        a[minNum] = tmp;
    }
    rep(i,n) out(a[i]);


}