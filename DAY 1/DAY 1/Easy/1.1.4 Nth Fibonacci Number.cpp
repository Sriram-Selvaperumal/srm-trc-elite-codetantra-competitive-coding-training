#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n == 1) return 0;
    if(n == 2) return 1;

    int a = 0; int b = 1, c;
    for(int i = 3; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main(){
    int n; cin >> n;
    cout << fibonacci(n);
    return 0;
}