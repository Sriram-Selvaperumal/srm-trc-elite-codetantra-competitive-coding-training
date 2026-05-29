#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	bool found = false;
	vector<vector<int>> matrix(n,vector<int>(m));

	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			cin >> matrix[i][j];
		}
	}
	int target;cin>>target;

	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m; j++){
			if(matrix[i][j] == target){
				cout << "Found at position ("<<i+1<<", "<<j+1<<')'<<'\n';
				found = true;
				break;
			}
		}
	}
	if(!found)cout <<"Not found";
	return 0;
}
