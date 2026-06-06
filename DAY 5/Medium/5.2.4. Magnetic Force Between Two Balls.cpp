#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>& pos, int balls,int gap){
	int placed =1 ;
	int prev = pos[0];

	for(int i = 0 ; i < pos.size() ; i++){
		if(pos[i] - prev >= gap){
			prev = pos[i];
			placed++;
		}
		if(placed == balls)return true;
	}
	return false;
}

int main(){
	int n , m;
	cin >> n >> m;

	vector<int> pos(n);

	for(int i = 0 ; i < n ; i++)cin >> pos[i];

	sort(pos.begin(),pos.end());

	int lo = 1;
	int hi = pos[n-1]-pos[0];
	int best = 1;

	while(lo <= hi){
		int mid = (lo+hi)/2;
		if(check(pos,m,mid)){
			best = mid;
			lo = mid+1;
		}
		else{
			hi = mid-1;
		}
	}

	cout << best <<endl;
	return 0;
}
