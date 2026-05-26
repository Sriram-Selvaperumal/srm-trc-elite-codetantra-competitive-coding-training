#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    int n; cin >> n;
    for(int i = 0 ; i < n ; i++){
        int num; cin >> num;
        arr.push_back(num);
    }
    for(int i = arr.size()-1 ; i >= 0 ; i--){
        cout << arr[i]<<' ';
    }
    return 0;
}
