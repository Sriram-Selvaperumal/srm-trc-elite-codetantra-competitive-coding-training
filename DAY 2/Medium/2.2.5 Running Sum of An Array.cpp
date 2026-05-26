#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> res;
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        int num ; cin >> num;
        sum += num;
        res.push_back(sum);
    }
    for(int i = 0 ; i < n ; i++){if(i != n-1)cout << res[i] << ' ';else cout << res[i];}
    return 0;
}
