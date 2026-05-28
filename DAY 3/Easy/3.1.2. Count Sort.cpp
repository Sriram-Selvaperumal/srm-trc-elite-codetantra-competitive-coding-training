#include<bits/stdc++.h>
using namespace std;
int main(){
	int n ; cin >> n;
	map<int,int> freq;
	vector<int> arr;

	for(int i = 0 ; i < n ; i++){
		int num; cin >> num;
		freq[num]++;
	}
	for(auto &p : freq){
		cout << p.first <<" -> "<<p.second<<'\n';
		for(int i = 0 ; i < p.second ;i++){
			arr.push_back(p.first);
		}
	}

	for(int i = 0 ; i < n ; i++){
	if(i  != n-1)cout << arr[i]<<' ';
		else cout << arr[i];
	}
	return 0;
}
