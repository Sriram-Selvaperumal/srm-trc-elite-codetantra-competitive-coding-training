#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; int m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m, 0));
    bool isFound = false;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            int num ; cin >> num;
            matrix[i][j] = num;
        }
    }

    int target ; cin >> target;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(matrix[i][j] == target) isFound = true;
        }
    }
    if(isFound) cout << "Found";
    else cout << "Not Found";
    return 0;
}
