#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    vector<vector<int>>matrix(n,vector<int>(m));

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){   // ✅ fixed: j < m
            int num; cin >> num;
            matrix[i][j] = num;
        }
    }

    vector<vector<long long>> psm(n,vector<long long>(m,0));

    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < m ; j++){
            psm[i][j] = matrix[i][j];
            if(i > 0) psm[i][j] += psm[i-1][j];
            if(j > 0) psm[i][j] += psm[i][j-1];
            if(i > 0 && j>0) psm[i][j] -= psm[i-1][j-1];
        }
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cout << psm[i][j]<<' ';
        }
        cout <<endl;
    }
    return 0;
}
