#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> arr(n);

	for(int i = 0 ; i < n ; i++)cin >> arr[i];

	for(int i = 0 ; i < n;i++){
		bool left = (i==0)|| arr[i]>arr[i-1];
		bool right = (i==n-1)|| arr[i]>arr[i+1];

		if(left&&right){
			cout << i;
			break;
		}
	}

	return 0;
}
