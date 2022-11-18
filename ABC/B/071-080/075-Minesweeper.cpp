// int main(){
//     int h, w;
//     cin >> h >> w;
//     vs s(h);
//     rep(i,h){
//         cin >> s[i];
//     }
//     rep(i,h){
//         rep(j,w){
//             if(s[i][j] == '.'){
//                 int count = 0;
//                 reps(dx,-1,2){
//                     reps(dy,-1,2){
//                         int xx = dx + j;
//                         int yy = dy + i;
//                         if(xx == j && yy == i) continue;
//                         if(xx >= 0 && xx < w && yy >= 0 && yy < h){
//                             if(s[yy][xx] == '#') count++;
//                         }    
//                     }
//                 }    
//                 s[i][j] = char(count + '0');
//             }
//         }
//     }
//     rep(i,h){
//             out(s[i]);

//     }
// }

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
using vvs = vector<vs>;
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
  vs s(h);
  rep(i,h) cin >> s[i];
  rep(i,h){
    rep(j,w){
      if(s[i][j] == '.'){
        int count = 0;
        reps(dx,-1,2){
          reps(dy,-1,2){
            if(dx == 0 && dy == 0) continue;
            int x = dx + j;
            int y = dy + i;
            // if(x == 0 && y == 0) cout << i << " " << j << endl;
            if(x >= 0 && x < w && y >= 0 && y < h){
              if(s[y][x] == '#'){
                count++;
                // cout << "i,j:" << i << j << " " << "x,y:" << x << y << endl; 
              }
            }
          }
        }
        s[i][j] = char(count + '0');
      }
    }
  }
  rep(i,h){
    out(s[i]);
  }
}