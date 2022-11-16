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
using vc = vector<char>;
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

const int MAX = 10000; 
int qu[MAX];
int tail = 0, head = 0;

void init(){
  head = 0;
  tail = 0;
}

bool isEmpty(){
  return tail == head;
}

bool isFull(){
  return (head == ((tail + 1)) % MAX);
}

void enqueue(int v){
  if(isFull()){
    out("error: queue is full.");
    return;
  }
  qu[tail++] = v;
  if(tail == (MAX)) tail = 0;
}

int dequeue(){
  if(isEmpty()){
    out("error: queue is empty.");
    return -1;
  }
  int res = qu[head];
  head++;
  if(head == MAX) head = 0;
  return res;
}

int main(){
  init();
  enqueue(3); // キューに 3 を積む {} -> {3}
  enqueue(5); // キューに 5 を積む {3} -> {3, 5}
  enqueue(7); // キューに 7 を積む {3, 5} -> {3, 5, 7}

  cout << dequeue() << endl; // {3, 5, 7} -> {5, 7} で 3 を出力
  cout << dequeue() << endl; // {5, 7} -> {7} で 5 を出力

  enqueue(9); // 新たに 9 を積む {7} -> {7, 9}
  enqueue(11); // {7, 9} -> {7, 9, 11}

  dequeue(); // {7, 9, 11} -> {9, 11}
  dequeue(); // {9, 11} -> {11}
  dequeue(); // {11} -> {}

  // 空かどうかを check: empty の方を出力
  cout << (isEmpty() ? "empty" : "not empty") << endl;
}