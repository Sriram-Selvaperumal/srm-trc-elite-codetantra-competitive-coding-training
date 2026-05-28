#include<bits/stdc++.h>
using namespace std;

void bubblesort(vector<int> &arr){
	int n = arr.size();
	int temp = 0;
	for(int i = 0 ; i < n-1 ; i++){
for(int j = 0 ; j < n-1; j++){
	if(arr[j]>arr[j+1]){
		temp = arr[j];
		arr[j] = arr[j+1];
		arr[j+1] = temp;
	}
}
	}
}

int main(){
 int n; cin >> n;
vector<int> arr;
for(int i = 0 ; i < n ; i++){
	int num; cin >> num;
	arr.push_back(num);
}
	bubblesort(arr);
	
	for(int i = 0 ;i < n ; i++){
		if(i != n-1)cout << arr[i]<<' ';
		else cout << arr[i];
	}
	return 0;
}
