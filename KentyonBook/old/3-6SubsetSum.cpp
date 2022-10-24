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
const int INF = 20000000;

int main(){
    int n,w;
    cin >> n >> w;
    vi a(n);
    rep(i,n) cin >> a[i];

    bool exist = false;
    rep(bit,(1 << n)){
        //部分集合に含まれる要素の和
        int sum = 0;
        cout << "bit: " << bit << "  ";
        rep(i,n){
            //i番目の要素a[i]が部分集合に含まれているかどうか
            if(bit & (1 << i)){
                sum += a[i];
                cout << "sum: " << sum << " ";
            }
            
        }
        cout << endl;
        //sumがWに一致するかどうか
        if(sum == w) exist = true;
    }
    if(exist) out("Yes");
    else out("No");
}