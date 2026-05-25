#include<bits/stdc++.h>
using namespace std;

bool isPerfectNumber(int n){
    int s = 0;
    for(int i = 1; i < n; i++){
        if(n%i == 0) s += i;
    }
    return s == n;
}

int main(){
    int n; cin >> n;
    if(isPerfectNumber(n)) cout << "True";
    else cout << "False";
    return 0;
}