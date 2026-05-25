#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int n){
    int sum = 0;
    int cp = n;
    int digits = to_string(n).length();
    while(n != 0){
        sum += pow(n%10, digits);
        n /= 10;
    }
    return cp == sum;
}

int main(){
    int n; cin >> n;
    if(isArmstrong(n)) cout << "Yes";
    else cout << "No";
    return 0;
}