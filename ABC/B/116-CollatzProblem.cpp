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
    int s;
    cin >> s;
    int nxt = s,ans;
    vi a(100000);
    a[0] = s;
    reps(i,1,100000){
        if(nxt % 2 == 0) nxt /= 2;
        else nxt = 3 * nxt + 1;
        a[i] = nxt;
        rep(j,i){
            if(a[j] == a[i]){
                ans = i + 1;
                out(ans);
                exit(0);
            }
        }
    }
}



/*
int main(){
    int s,i = 0;
    vi a(100000000);
    cin >> s;

    while(true){
        if(i == 0) a[i] = s;
        
        else if(a[i - 1] % 2 == 0){
            a[i] = a[i - 1] / 2;
        }
        else if(a[i - 1] % 2 == 1){
            a[i] = 3 * a[i - 1] + 1;
        }

        for(int j = 1; j < i; j++){
            if(a[j] == a[i]){
                out(i + 1);
                exit(0);
            }
        }
        i++;
    }
    */
   /*
   int s;
   cin >> s;
   set<int> p;
   p.insert(s);
   int ini = s;
   reps(i,2,1010101){
       int nxt;
       if(ini % 2 == 0) nxt = ini / 2;
       else nxt = ini * 3 + 1;

       if(p.count(nxt)){
           out(i);
           exit(0);
       }
       p.insert(nxt);
       ini = nxt;
   }

   return 0;
}
*/