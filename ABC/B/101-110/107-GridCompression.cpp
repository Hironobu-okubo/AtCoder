
// int main(){
//     int h, w;
//     cin >> h >> w;
//     vs a(h);
//     rep(i,h){
//         cin >> a[i];
//     }
//     vector<bool> row(h,false);
//     vector<bool> column(w,false);
//     rep(i,h){
//         rep(j,w){
//             if(a[i][j] == '#'){
//                 row[i] = true;
//                 column[j] = true; 
//             }
//         }
//     }
//     rep(i,h){
//         if(row[i]){
//             rep(j,w){
//                 if(column[j]) cout << a[i][j];
//             }
//             cout << endl;
//         }
//     }
// }



// /*
// int main(){
//     int h,w;
//     cin >> h >> w;
//     vector<string> ans(h);
//     rep(i,h){
//         cin >> ans[i];
//     }
//     vector<bool> row(h,false);
//     vector<bool> col(w,false);
//     rep(i,h){
//         rep(j,w){
//             if(ans[i][j] == '#'){
//                 row[i] = true;
//                 col[j] = true;
//             }
//         }
//     }

//     rep(i,h){
//         if(row[i]){
//             rep(j,w){
//                 if(col[j]){
//                     cout << ans[i][w];
//                 }
//             }
//             cout << endl;
//         }
//     }
// }
// */

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
  int h,w;
  cin >> h >> w;
  vector<vector<char>> a(h,vector<char>(w));
  vector<vector<bool>> abool(h,vector<bool>(w));
  vi col(h,0);
  rep(i,h){
    rep(j,w){
      cin >> a[i][j];
      abool[i][j] = true;
    }
  }
  rep(i,h){
    rep(j,w){
      if(a[i][j] == '.') col[i] += 1;
    }
    if(col[i] == w){
      rep(j,w){
        abool[i][j] = false;
      }
    }
  }
  rep(j,w){
    int row = 0;
    rep(i,h){
      if(a[i][j] == '.') row++;
    }
    if(row == h){
      rep(i,h){
        abool[i][j] = false;
      }
    }
  }
  rep(i,h){
    rep(j,w){
      if(abool[i][j] == true){
        cout << a[i][j];
      }
    }
    if(col[i] != w) cout << endl;
  }
}