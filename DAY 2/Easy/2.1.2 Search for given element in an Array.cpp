#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin >> n;
    bool isFound = false;
    int index;
    vector<int> arr;
    for(int i = 0 ; i < n ; i++){
        int num; cin >> num;
        arr.push_back(num);
    }
    int target; cin >> target;
    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i] == target){isFound = true;index = i;break;}
    }
    if(isFound)cout<<"Found at index "<<index;
    else cout << "Not Found";
    return 0;
}
