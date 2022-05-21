#include <iostream>
using namespace std;

void ShowCode(char ch){
    cout << ch << "に振られた番号は" << (int)(unsigned char)ch << endl;
}

int main(){
    ShowCode('0');
    ShowCode('A');
}