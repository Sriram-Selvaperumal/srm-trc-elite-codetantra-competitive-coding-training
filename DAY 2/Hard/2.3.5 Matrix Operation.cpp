#include<bits/stdc++.h>
using namespace std;

int main(){
    char op; cin >> op;
    int val; cin >> val;
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j < m ; j++){
            cin >> matrix[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j < m ; j++){
            if(op == '+') matrix[i][j] = matrix[i][j]+val;
            if(op == '-') matrix[i][j] = matrix[i][j]-val;
            if(op == '*') matrix[i][j] = matrix[i][j]*val;
            if(op == '/') matrix[i][j] = matrix[i][j]/val;
            if(op == '%') matrix[i][j] = matrix[i][j]%val;
        }
    }
    for(vector<int> submat : matrix){
        for(int i = 0 ; i < submat.size(); i++){
            if(i != submat.size()-1) cout << submat[i] << ' ';
            else cout << submat[i];
        }
        cout << endl;
    }

    return 0;
}
