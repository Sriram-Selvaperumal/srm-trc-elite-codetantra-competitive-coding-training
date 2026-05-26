#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    int maxel = 0;
    int n;cin >> n;
    for(int i = 0 ; i < n ; i++){
        int num; cin >> num;
        maxel = max(maxel,num);
        arr.push_back(num);
    }
    for(int i = 0 ;i < n ; i++){
        if(i==0)cout<<'['<<arr[i]<<',';
        else if(i==n-1)cout<<' '<<arr[i]<<']';
        else cout<<' '<<arr[i]<<',';
    }
    cout << '\n' << maxel;
    return 0;
}
