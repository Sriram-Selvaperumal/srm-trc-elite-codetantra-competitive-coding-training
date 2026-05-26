#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> freq;
    int zf = 0;
    int n ; cin >> n;
    for(int i = 0 ; i < n; i++){
        int num; cin >> num;
        freq[num]++;
    }
    for(auto &p : freq){
        if(p.first != 0)cout << p.first << " occurs "
        << p.second << " times" << endl;
        else zf = p.second;
    }
    if(zf) cout << 0 << " occurs " << zf << " times";
    return 0;
}
