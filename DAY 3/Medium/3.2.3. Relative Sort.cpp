#include<bits/stdc++.h>
using namespace std;

int main(){
	int n , m;
	cin >> n >> m;
	map<int,int> freq;
	for(int i = 0 ; i < n ; i++){
		int num;
		cin >> num;
		freq[num]++;
	}
	map<int,int> used;
	bool first = true;
	for(int i = 0 ; i < m ; i++){
		int num ; cin >> num;
		for(int j = 0 ; j < freq[num]; j++){
			if(!first)cout << ' ';
			cout << num;
			first = false;
		}
		used[num] = freq[num];
	}

	for(auto &p : freq){
		if(used.find(p.first) == used.end()){
			for(int j = 0 ; j <p.second ;j++){
				if(!first)cout <<' ';
				cout << p.first;
				first = false;
			}
		}
	}
	return 0;
}
