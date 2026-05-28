#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;cin >> n;
	vector<int> arr(n);
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	int students;cin >> students;

	sort(arr.begin(),arr.end());
	int min_diff = INT_MAX;
	for(int i = 0;i <= n-students ; i++){
		int diff = arr[i+students-1]-arr[i];
		min_diff = min(min_diff,diff);
	}
	cout << min_diff;
	return 0;
}
