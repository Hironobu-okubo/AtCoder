
// int main(){
//     string a, b, c;
//     cin >> a >> b >> c;
//     char nxt = 'a';
//     bool ifZero = true;
//     int num_a = 0,num_b = 0,num_c = 0;
//     while(ifZero){
//       if(nxt == 'a'){
//         nxt = a[num_a];
//         num_a++;
//       }
//       else if(nxt == 'b'){
//         nxt = b[num_b];
//         num_b++;
//       }
//       else if(nxt == 'c'){
//         nxt = c[num_c];
//         num_c++;
//       }
//       if(num_a > a.size()){
//         out("A");
//         ifZero = false;
//       }
//       if(num_b > b.size()){
//         out("B");
//         ifZero = false;
//       }
//       if(num_c > c.size()){
//         out("C");
//         ifZero = false;
//       }

//     }

// }
// /*
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   string a,b,c;
//   cin >> a >> b >> c;
//   char next = 'a';
//   int pos_a = 0;
//   int pos_b = 0;
//   int pos_c = 0;
//   int length_a = a.length(),length_b = b.length(),length_c = c.length();
//   while(true){
//     if(next == 'a'){
//       if(pos_a >= length_a){
//         cout << 'A' << endl;
//         break;
//       }
//       else{
//         next = a.at(pos_a);
//         pos_a++;
//       }
//     }
//      if(next == 'b'){
//       if(pos_b >= length_b){
//         cout << 'B' << endl;
//         break;
//       }
//       else{
//         next = b.at(pos_b);
//         pos_b++;
//       }
//     }
//      if(next == 'c'){
//       if(pos_c >= length_c){
//         cout << 'C' << endl;
//         break;
//       }
//       else{
//         next = c.at(pos_c);
//         pos_c++;
//       }
//     }
//   }
//   return 0;
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
  string a,b,c;
  cin >> a >> b >> c;
  char turn = 'a';
  bool isWin = true;
  string winner;

  while(isWin){
    if(turn == 'a'){
      if(a.size() == 0){
        winner = "A";
        isWin = false;
      } 
      else{
      turn = a[0];
      reverse(all(a));
      a.pop_back();
      reverse(all(a));
      }
    }

    else if(turn == 'b'){
      if(b.size() == 0){
        winner = "B";
        isWin = false;
      } 
      else{
        turn = b[0];
        reverse(all(b));
        b.pop_back();
        reverse(all(b));
      }
    }

    else if(turn == 'c'){
      if(c.size() == 0){
        winner = "C";
        isWin = false;
      } 
      else{
        turn = c[0];
        reverse(all(c));
        c.pop_back();
        reverse(all(c));
      } 
    }
  }
  out(winner);
}