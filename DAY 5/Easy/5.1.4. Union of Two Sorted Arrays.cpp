#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n;
	map<int,int> freq;
	for(int i = 0 ; i < n ;i++){
		int num; cin >> num;
		freq[num]++;
	}
	cin >> m;
	for(int i = 0 ; i < m ;i++){
		int num ; cin >> num;
		freq[num]++;
	}

	for(auto &p : freq){
		cout << p.first<<' ';
	}
	return 0;
}
