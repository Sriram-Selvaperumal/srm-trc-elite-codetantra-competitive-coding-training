#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    bool found = false;
    vector<int> arr;
    for(int i = 0 ; i < n ; i++){
        int num; cin >> num;
        arr.push_back(num);
    }
    int target; cin >> target;
    for(int slow = 0 ; slow < n ; slow++){
        for(int fast = 0 ; fast < n ; fast++){
            if(arr[slow]+arr[fast] == target){cout<<'('<<arr[slow]<<','<<arr[fast]<<')'<<' ';
                found = true;}
        }
    }
    if(!found) cout << "No pairs found";
}
