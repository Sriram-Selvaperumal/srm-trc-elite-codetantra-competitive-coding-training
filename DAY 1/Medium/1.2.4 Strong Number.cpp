#include<bits/stdc++.h>
using namespace std;

long factorial(int n){
    long fact = 1;
    while(n != 0){
        fact *= n;
        n--;
    }
    return fact;
}

bool isStrongNumber(int n){
    long sum = 0;
    int cp = n;
    while(n != 0){
        sum += factorial(n%10);
        n /= 10;
    }
    return sum == cp;
}

int main(){
    int n; cin >> n;
    if(isStrongNumber(n)) cout << "Strong Number" << endl;
    else cout << "Not a Strong Number" << endl;
    return 0;
}