#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int res = (a*a*a) + (a*a*b) + (2*a*a*b) + (2*a*b*b) + (a*b*b) + (b*b*b);
    cout << res;
}