#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n <= 1) return false;
    bool prime = true;
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0){
            prime = false; break;
        }
    }
    return prime;
}

int main(){
    int n; cin >> n;
    if(isPrime(n)) cout << "true";
    else cout << "false";
    return 0;
}