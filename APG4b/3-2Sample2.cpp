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
    vector<tuple<int,int,int>> a;
    a.pb(make_tuple(3,1,1));
    a.pb(make_tuple(1,2,100));
    a.pb(make_tuple(1,3,4));
    sort(all(a));

    for(tuple<int,int,int> t:a){
        int x,y,z;
        tie(x,y,z) = t;
        cout << x << " " << y << " " << z << endl;
    }
    
    string a = "Hello";
    string b = "World";
    auto ab = a + b;
    out(ab);

    vi c = {1,2,3};
    auto d = c;
    for(auto elem : d){
        out(elem);
    }
    */
    vi b = {1,2,3};
    for(auto a : b){
        cout << a << " ";
    }
    cout << endl;
    for(auto &elem : b){
        elem *= 2;
        cout << elem << " ";
    }
    cout << endl;
    for(auto a : b){
        cout << a << " ";
    }
}