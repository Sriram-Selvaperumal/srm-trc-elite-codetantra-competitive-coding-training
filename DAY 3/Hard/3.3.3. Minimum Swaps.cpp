#include<bits/stdc++.h>
using namespace std;

int main(){
	int n ; cin >> n;
	vector<int> arr(n) , sarr;

	for(int i = 0 ; i < n;i++){
		cin >> arr[i];
	}
	sarr = arr;
	sort(sarr.begin(),sarr.end());

	unordered_map<int,int> index;

	for(int i = 0 ; i < n ; i++){
		index[arr[i]] = i;
	}

	int swaps = 0;

	for(int i = 0 ; i < n; i++){
		if(arr[i] == sarr[i])continue;
		swaps++;

		int cv = sarr[i];
		int ci = index[cv];

		index[arr[i]] = ci;
		index[cv] = i;

		swap(arr[i],arr[ci]);
	}

	cout << swaps;

	return 0;
}
