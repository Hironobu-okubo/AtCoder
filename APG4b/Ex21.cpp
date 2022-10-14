// #include <bits/stdc++.h>
// using namespace std;
 
// int f0(int N) {
//   return 1;
// }
 
// int f1(int N, int M) {
//   int s = 0;
//   for (int i = 0; i < N; i++) {
//     s++;
//   }
//   for (int i = 0; i < M; i++) {
//     s++;
//   }
//   return s;
// }
 
// int f2(int N) {
//   int s = 0;
//   for (int i = 0; i < N; i++) {
//       int t = N;
//       int cnt = 0;
//       while (t > 0) {
//         cnt++;
//         t /= 2;
//       }
//       s += cnt;
//   }
//   return s;
// }
 
 
// int f3(int N) {
//   int s = 0;
//   for (int i = 0; i < 3; i++) {
//     for (int j = 0; j < 3; j++) {
//       s++;
//     }
//   }
//   return s;
// }
 
// int f4(int N) {
//   int s = 0;
//   for (int i = 0; i < N; i++) {
//     for (int j = 0; j < N; j++) {
//       s += i + j;
//     }
//   }
//   return s;
// }
 
// int f5(int N, int M) {
//   int s = 0;
//   for (int i = 0; i < N; i++) {
//     for (int j = 0; j < M; j++) {
//       s += i + j;
//     }
//   }
//   return s;
// }
 
// int main() {
//   int N, M;
//   cin >> N >> M;
 
//   int a0 = -1, a1 = -1, a2 = -1, a3 = -1, a4 = -1, a5 = -1;
 
//   // 計算量が最も大きいもの1つだけコメントアウトする
//   a0 = f0(N);
//   a1 = f1(N, M);
//   a2 = f2(N);
//   a3 = f3(N);
//   //a4 = f4(N);
//   a5 = f5(N, M);
 
//   cout << "f0: " << a0 << endl;
//   cout << "f1: " << a1 << endl;
//   cout << "f2: " << a2 << endl;
//   cout << "f3: " << a3 << endl;
//   cout << "f4: " << a4 << endl;
//   cout << "f5: " << a5 << endl;
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

int f0(int N) {
  return 1;
}
 
int f1(int N, int M) {
  int s = 0;
  for (int i = 0; i < N; i++) {
    s++;
  }
  for (int i = 0; i < M; i++) {
    s++;
  }
  return s;
}
 
int f2(int N) {
  int s = 0;
  for (int i = 0; i < N; i++) {
      int t = N;
      int cnt = 0;
      while (t > 0) {
        cnt++;
        t /= 2;
      }
      s += cnt;
  }
  return s;
}
 
 
int f3(int N) {
  int s = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      s++;
    }
  }
  return s;
}
 
int f4(int N) {
  int s = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      s += i + j;
    }
  }
  return s;
}
 
int f5(int N, int M) {
  int s = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      s += i + j;
    }
  }
  return s;
}
 
int main() {
  int N, M;
  cin >> N >> M;
 
  int a0 = -1, a1 = -1, a2 = -1, a3 = -1, a4 = -1, a5 = -1;
 
  // 計算量が最も大きいもの1つだけコメントアウトする
  a0 = f0(N);
  a1 = f1(N, M);
  a2 = f2(N);
  a3 = f3(N);
  //a4 = f4(N);
  a5 = f5(N, M);
 
  cout << "f0: " << a0 << endl;
  cout << "f1: " << a1 << endl;
  cout << "f2: " << a2 << endl;
  cout << "f3: " << a3 << endl;
  cout << "f4: " << a4 << endl;
  cout << "f5: " << a5 << endl;
}