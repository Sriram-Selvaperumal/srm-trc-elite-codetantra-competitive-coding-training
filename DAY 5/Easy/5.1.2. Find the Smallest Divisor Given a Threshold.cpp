#include<bits/stdc++.h>
using namespace std;

int calculate(vector<int> arr,int div){
	int sum = 0;

	for( int i : arr) sum+=(i+div-1)/div;

	return sum;
}

int main(){
	int n , t;
	cin >> n >> t;

	vector<int> arr;
	int low =1;
	int high = INT_MIN;
	
	for(int i = 0 ; i < n ;i++){
		int num ; cin >> num;
		if(num > high)high  = num;
		arr.push_back(num);
	}
	int ans = high;

	while(low <= high){
		int mid = low+(high-low)/2;

		int cs = calculate(arr,mid);

		if(cs <= t) {
			ans = mid;
			high = mid -1;
		}

		else low = mid +1;
	}

	cout << ans;
	return 0;
}
