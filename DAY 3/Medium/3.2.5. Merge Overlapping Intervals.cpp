#include<bits/stdc++.h>
using namespace std;

int main(){
	int n ;
	cin >> n;

vector<pair<int,int>> intervals(n);
for(int i = 0 ; i < n ; i++){
	cin >> intervals[i].first >> intervals[i].second;
}

sort(intervals.begin(),intervals.end());
vector<pair<int,int>> result;
result.push_back(intervals[0]);

for(int i = 1 ; i < n ; i++){
	pair<int,int> &last = result.back();

	if(intervals[i].first<=last.second){
		last.second = max (last.second,intervals[i].second);
	}else{
		result.push_back(intervals[i]);
	}
}
	for( auto &p : result){
		cout << p.first <<' '<<p.second<<'\n';
	}
	return 0;
}
