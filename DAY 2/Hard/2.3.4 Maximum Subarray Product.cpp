#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin >> n;
    vector<long long> arr(n);

    for(int i = 0 ; i < n ; i++){
        int num; cin >> num;
        arr[i] = num;
    }

    long long maxnum = arr[0];
    long long minum = arr[0];
    long long res = arr[0];

    for(int i = 1 ; i < n ; i++){
        long long temp_maxnum = maxnum;
        long long temp_minum = minum;
        maxnum = max({arr[i], temp_maxnum*arr[i], temp_minum*arr[i]});
        minum = min({arr[i], temp_maxnum*arr[i], temp_minum*arr[i]});

        res = max(res, maxnum);
    }
    cout << res;
    return 0;
}
