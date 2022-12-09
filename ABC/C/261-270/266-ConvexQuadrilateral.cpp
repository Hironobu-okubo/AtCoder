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
using vc = vector<char>;
using vvc = vector<vc>;
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

template<typename T> inline bool chmax(T &a, T b) { return ((a < b) ? (a = b, true) : (false)); }
template<typename T> inline bool chmin(T &a, T b) { return ((a > b) ? (a = b, true) : (false)); }

// double calcArg(double x1, double y1, double x2, double y2, double x3, double y3){
//   double vecAx = x1 - x2;
//   double vecAy = y1 - y2;
//   double vecBx = x3 - x2;
//   double vecBy = y3 - y2;
//   double top = vecAx * vecBx + vecAy * vecBy;
//   double bot = sqrt(vecAx * vecAx + vecAy * vecAy) * sqrt(vecBx * vecBx + vecBy * vecBy);
//   double co = top / bot;
//   double rad = acos(co);
//   double deg = rad * (180.0 / M_PI);
//   return deg;
// }

// int main(){
//   double ax,ay,bx,by,cx,cy,dx,dy;
//   cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;
//   double argA = calcArg(dx,dy,ax,ay,bx,by);
//   double argB = calcArg(ax,ay,bx,by,cx,cy);
//   double argC = calcArg(bx,by,cx,cy,dx,dy);
//   double argD = calcArg(cx,cy,dx,dy,ax,ay);
//   // cout << argA << ' ' << argB << ' ' << argC << ' ' << argD;
//   double sum = 360.0;
//   if(argA + argB + argC + argD < sum) out("No");
//   else out("Yes");
// }

int calcCross(int x1, int y1, int x2, int y2, int x3, int y3){
  int vecAx = x1 - x2;
  int vecAy = y1 - y2;
  int vecBx = x3 - x2;
  int vecBy = y3 - y2;
  return vecBx * vecAy - vecAx * vecBy;
}

int main(){
  int ax,ay,bx,by,cx,cy,dx,dy;
  cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;
  int a = (bx - ax)*(dy - ay) - (by - ay)*(dx - ax);
  int b = (cx - bx)*(ay - by) - (cy - by)*(ax - bx);
  int c = (dx - cx)*(by - cy) - (dy - cy)*(bx - cx);
  int d = (ax - dx)*(cy - dy) - (ay - dy)*(cx - dx);
  // cout << a << b << c << d << endl; 
  if(a > 0 && b > 0 && c > 0 && d > 0)out("Yes");
  else out("No");
}
