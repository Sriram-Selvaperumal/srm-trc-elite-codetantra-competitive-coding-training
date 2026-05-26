#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m, 0));

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            int num; cin >> num;
            matrix[i][j] += num;
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            int num; cin >> num;
            matrix[i][j] += num;
        }
    }

    for(vector<int> submat : matrix){
        for(int i : submat){
            cout << i << ' ';
        }
        cout << endl;
    }
    return 0;
}
