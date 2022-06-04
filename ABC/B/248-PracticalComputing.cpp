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
    int n;
    cin >> n;
    vector<vector<int>> a(n,vector<int>(n));
    rep(i,n){
        rep(j,i+1){
            if(i == j || j == 0) a[i][j] = 1;
            else a[i][j] =  a[i - 1][j - 1] + a[i - 1][j];
            cout << a[i][j] << " ";
        }
        out("");

    }
}