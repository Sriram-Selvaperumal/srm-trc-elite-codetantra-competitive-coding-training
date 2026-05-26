#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m, 0));

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            int num; cin >> num;
            matrix[i][j] = num;
        }
    }

    for(int j = 0 ; j < m ; j++){
        cout << matrix[0][j] << ' ';
    }
    for(int i = 1 ; i < n ; i++){
        cout << matrix[i][m-1] << ' ';
    }
    if(n>1) for(int j = m-2 ; j >= 0 ; j--){
        cout << matrix[n-1][j] << ' ';
    }
    if(m>1) for(int i = n-2 ; i > 0 ; i--){
        cout << matrix[i][0] << ' ';
    }
    return 0;
}
