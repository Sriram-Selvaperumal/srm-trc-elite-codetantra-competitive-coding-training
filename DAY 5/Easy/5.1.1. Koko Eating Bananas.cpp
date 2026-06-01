#include<bits/stdc++.h>
using namespace std;

int main(){
	int low = 1;
	int high = INT_MIN;
	

	int n ; cin >> n;
	vector<int> arr;

	for(int i = 0 ; i < n ; i++){
		int num ; cin >> num;
		if(num > high)high = num;
		arr.push_back(num);
	}
int ans = high;
	int hour;cin >> hour;

	while(low <= high){
		int mid = low+(high-low)/2;
		int h = 0;

		for(int banana : arr){
			h += (banana + mid-1)/mid;
		}

		if(h <= hour){
			ans = mid;
			high = mid -1;
		}

		else low = mid+1;
	}

	cout << ans;
	return 0;
}
