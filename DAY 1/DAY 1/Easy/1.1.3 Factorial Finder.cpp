#include<bits/stdc++.h>
using namespace std;

long Factorial(int n){
    long fact = 1;
    while(n != 0){
        fact *= n;
        n -= 1;
    }
    return fact;
}

int main(){
    int n; cin >> n;
    cout << Factorial(n);
    return 0;
}