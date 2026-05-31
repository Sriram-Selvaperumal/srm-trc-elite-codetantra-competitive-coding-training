#include<bits/stdc++.h>
using namespace std;

int main(){
	int n ; cin >> n;
	bool found = false;
	vector<int> arr(n);
	for(int i = 0 ; i < n ; i++)cin >> arr[i];
	int target ; cin >> target;
	int left = 0 ; int right = n-1;

	while(left<=right){
		int mid = left+(right-left)/2;

		if(arr[mid]==target){
			cout << mid;
			found = true;
			break;
		}
		else if(arr[mid]<target)left = mid+1;
		else right = mid-1;
	}
	if(!found)cout << -1;
	return 0;
}
