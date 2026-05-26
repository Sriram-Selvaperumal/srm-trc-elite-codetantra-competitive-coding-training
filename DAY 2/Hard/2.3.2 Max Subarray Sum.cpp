#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int sum = 0;
    int mnum = INT_MIN;
    for(int i = 0; i < n ; i++){
        int num; cin >> num;
        sum += num;
        mnum = max(mnum, sum);
        if(sum < 0) sum = 0;
    }
    cout << mnum;
    return 0;
}
