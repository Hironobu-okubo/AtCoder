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
    map<string, int> score;
    score["Alice"] = 100;
    score["Bob"] = 89;
    score["Charlie"] = 95;
    score["Charlie"] = 0;
    score.erase("Alice");
    cout << score.at("Charlie") << endl;
    cout << score.count("Charlie") << endl;
    cout << score.size() << endl;

    for(pair<string,int> p : score){
        string k = p.first;
        int v = p.second;
        cout << k << " =>" << v << endl;
    }
    for(auto p : score){
        auto k = p.second;
        auto v = p.first;
        cout << v << " => "<< k << endl;
    }
}
