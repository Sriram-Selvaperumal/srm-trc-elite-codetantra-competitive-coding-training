#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<vector<int>> mat(n, vector<int>(n, 0));

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            int num; cin >> num;
            mat[i][j] = num;
        }
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = n-1 ; j >= 0; j--){
            cout << mat[j][i] << ' ';
        }
        cout << endl;
    }
    return 0;
}
