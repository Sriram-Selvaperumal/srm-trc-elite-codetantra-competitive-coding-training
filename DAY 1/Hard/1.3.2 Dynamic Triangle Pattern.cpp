#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int abet = 65;

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(j == 1){cout << char(abet) << '.'; abet++;}
            cout << "*.";
        }
        cout << endl;
    }
    return 0;
}