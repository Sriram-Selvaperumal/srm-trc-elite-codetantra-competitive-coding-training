#include<bits/stdc++.h>
using namespace std;

int main(){
	int n ; cin >> n;
	vector<vector<int>> arr(n,vector<int>(2));

	for(int i = 0 ; i < n ; i++){
		cin >> arr[i][0];
		cin >> arr[i][1];
	}

sort(arr.begin(),arr.end(),[](const vector<int> &a,const vector<int> &b){
	if(a[0] == b[0])return a[1]>b[1];
	return a[0]<b[0];
});

vector<int> arr2;
	for(int i = 0 ; i < n ;i++){
		int h = arr[i][1];
		auto it = lower_bound(arr2.begin(),arr2.end(),h);
		if(it == arr2.end())arr2.push_back(h);
		else *it = h;
	}

	cout << arr2.size();
	return 0;
}
