#include<bits/stdc++.h>
using namespace std;

int fo(vector<int> &arr,int n,int target){
	for(int i = 0 ; i < n ; i++){
		if(arr[i] == target)return i;
	}
	return 0;
}

int lo(vector<int> &arr, int n,int target){
	for(int i = n-1 ; i >= 0 ;i--){
		if(arr[i] == target)return i;
	}
	return 0;
}


int main(){
	int n; cin >> n;
	vector<int> arr(n);

	for(int i = 0 ; i < n ; i++)cin >> arr[i];
int target; cin >> target;
	
	if(find(arr.begin(),arr.end(),target)!=arr.end()){
		cout<<"First occurrence: "<<fo(arr,n,target)<<'\n';
		cout<<"Last occurrence: "<<lo(arr,n,target)<<'\n';
	}
	else cout <<"Element not found"<<'\n';
	return 0;
}
