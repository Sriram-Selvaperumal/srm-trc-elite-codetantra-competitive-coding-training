#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int l = n-2;
    for(int i = 0; i < n; i++){
        if(i == 0 || i == n-1)
            for(int j = 0; j < n; j++) cout << "#.";
        else{
            for(int j = 0; j < n; j++){
                if(j == 1){cout << "#."; l--;}
                else cout << "..";
            }
        }
        cout << endl;
    }
    return 0;
}