#include<bits/stdc++.h>
using namespace std;

int main(){
	int n ; cin >> n;
	vector<int> arr(n);
	bool removed = false;

	for(int i = 0 ; i < n ; i ++){
		cin >> arr[i];
	}

	int target; cin >> target;

	for(int i = 0 ; i < n ; i++){
		if(arr[i] == target)
		{arr.erase(arr.begin()+i);
		removed = true;
		break;}
	}

	if(removed){
		for(int i = 0 ; i < arr.size() ; i++){
			if(i != arr.size()-1)cout<<arr[i]<<' ';
			else cout << arr[i];
		}
	}
	else cout <<"Not Found";
	return 0;
	}
