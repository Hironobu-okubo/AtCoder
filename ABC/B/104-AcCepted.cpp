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
    string s;
    cin >> s;
    bool isAtCoder = true;
    if(s[0] != 'A') isAtCoder = false;
    int count = 0;
    reps(i,1,s.size()){
        if(isupper(s[i])){
            if(i == 1 || i == s.size() - 1 || s[i] != 'C'){
                isAtCoder = false;
            }
            count++;
        }
    }
    if(count != 1) isAtCoder = false;
    if(isAtCoder) out("AC");
    else out("WA");
}


/*
int main(){
    string s;
    cin >> s;
    string ans = "AC";
    if(s[0] != 'A') ans = "WA";
    int count = 0;
    for(int i = 1; i < s.size(); i++){
        if(isupper(s[i])){
            if(i == 1 || i == s.size() - 1 || s[i] != 'C'){
                ans = "WA"; 
            }
            count++;
        }
    }
    if(count != 1) ans = "WA";
    out(ans);
}
*/