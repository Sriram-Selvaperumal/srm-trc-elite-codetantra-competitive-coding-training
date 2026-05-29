#include<bits/stdc++.h>
using namespace std;

int main(){
	int n ; cin >> n;
	vector<vector<int>> arr(n,vector<int>(2));

	for(int i = 0 ; i < n; i++){
		cin>> arr[i][0];
		cin >> arr[i][1];
	}

	sort(arr.begin(),arr.end(), [](const vector<int> &a,const vector<int> &b){
		if(a[0] != b[0])return a[0]>b[0];
		return a[1] < b[1];
	});

vector<vector<int>> ans;
	for(auto &p : arr){
		ans.insert(ans.begin()+p[1],p);
	}

	for(auto &p : ans){
		cout << p[0]<<' '<<p[1]<<"\n";
	}
	
	return 0;
}
