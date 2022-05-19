#include <bits/stbc++.h>
using namespace std;

int main(){
    int N, K, X, Y;
    int sum = 0;
    cin >> N >> K >> X >> Y;
    for(int i = 0; i < N; i++){
        if(i <= K) sum += X;
        else sum += Y;
    }
    cout << sum;

    return 0;
}