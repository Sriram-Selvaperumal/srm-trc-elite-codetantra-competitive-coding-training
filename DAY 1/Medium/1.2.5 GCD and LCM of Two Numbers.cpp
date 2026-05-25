#include<bits/stdc++.h>
using namespace std;

int gcd(int n1, int n2){
    int temp = max(n1, n2);
    n1 = min(n1, n2);
    n2 = temp;

    while(n1 != 0){
        temp = n1;
        n1 = n2 % n1;
        n2 = temp;
    }
    return n2;
}

int lcm(int n1, int n2){
    int n3 = n1 * n2;
    return (n3 / gcd(n1, n2));
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << ' ' << lcm(a, b);
    return 0;
}