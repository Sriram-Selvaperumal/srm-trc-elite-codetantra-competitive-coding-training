#include<bits/stdc++.h>
using namespace std;

int main(){
	int n ; cin >> n;
	vector<int> arr(n);
	bool found = false;
	for(int i = 0 ; i < n; i++)cin >> arr[i];

	int target; cin >> target;

	for(int i = n-1 ; i >= 0 ; i--){
		if(arr[i] == target){
			cout << i;
			found = true;
			break;
		}
	}

	if(!found){
		cout <<-1;
	}

	return 0;
}
