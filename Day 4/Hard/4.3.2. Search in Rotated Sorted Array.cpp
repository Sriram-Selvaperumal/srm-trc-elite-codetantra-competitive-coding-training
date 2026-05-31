#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;cin >>n;
	vector<int> arr(n);

	for(int i = 0 ; i < n ; i++)cin >> arr[i];
	int k ; cin >> k;
	int target; cin>> target;

	while(k!=0){
		arr.push_back(arr[0]);
		arr.erase(arr.begin());
		k--;
	}
	int index = -1;
	for(int i = 0 ; i < n ;i++){
		if(arr[i]==target){
			index = i;
		}
	}

for(int i = 0 ; i < n ; i++){
	i!=n-1 ? cout << arr[i]<<' ' : cout <<arr[i]<<'\n';
}
cout <<  index;
	return 0;
}
