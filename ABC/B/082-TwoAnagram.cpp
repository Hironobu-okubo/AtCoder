#include <bits/stdc++.h>
using namespace std;
using VI = vector<int>;
typedef long long ll ;
#define all(a) (a).begin(),(a).end()
#define out(x) cout << x << endl
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define pb push_back

int main(){
    string s,t;
    cin >> s >> t;
    sort(all(s));
    sort(all(t));
    reverse(all(t));
    if(s < t) out("Yes");
    else out("No");
    return 0;
}
