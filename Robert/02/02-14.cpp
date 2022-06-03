#include <iostream>
using namespace std;

int main(){
    for(int i = 0; i < 5; i++){
        int a, b , op, result;
        a = 3;
        b = 5;
        cin >> op;

        switch(op){
            case 1:
                result = a + b;
                break;
            case 2:
                result = a - b; break;
            case 3:
                result = a * b; break;
            case 4:
                result = a / b; break;
            default:
            cout << "不適切な数字です" << endl;
            continue;
        }
        cout << result << endl;
    }
}