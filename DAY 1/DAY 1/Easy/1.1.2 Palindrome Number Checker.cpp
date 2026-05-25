#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
    int cp = n;
    int rev = 0;
    while(n != 0){
        rev *= 10;
        rev += n%10;
        n /= 10;
    }
    return cp == rev;
}

int main(){
    int n; cin >> n;
    if(isPalindrome(n)) cout << "Palindrome";
    else cout << "Not a palindrome";
    return 0;
}