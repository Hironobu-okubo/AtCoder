#include <bits/stdc++.h>
using namespace std;
using VI = vector<int>;
typedef long long ll ;
#define all(a) (a).begin(),(a).end()
#define out(x) cout << x << endl
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define repp(i, n) for(int i = 1; i <= (int)(n); i++)
#define pb push_back

int main(){
    int n,a,b,tmp = 0,rem = 0,sum = 0;
    cin >> n >> a >> b;
    repp(i,n){
        rem = i;
        while(rem != 0){
            tmp += rem % 10;
            rem =  rem / 10;
            
        }
        if(tmp >= a && tmp <= b){
            sum += i;
        }
        tmp = 0;
    }
    out(sum);
}