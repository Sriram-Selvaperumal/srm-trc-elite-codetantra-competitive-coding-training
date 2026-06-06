#include<bits/stdc++.h>
using namespace std;

int daysRequired(vector<int>& w,int cap){
	int cnt = 1, cur = 0;
	for(int i = 0 ; i < w.size(); i++){
		if(cur+w[i]>cap){
			cnt++;
			cur  = 0;
		}
		cur += w[i];
	}
	return cnt;
}

int main(){
	int n,d;
	cin >> n >> d;

	vector<int> w(n);
	for(int i = 0 ; i < n;i++)cin >> w[i];

	int l = *max_element(w.begin(),w.end());
	int r = 0;
	for(int x : w) r+=x;

	while(l<r){
		int m = l+(r-l)/2;
		if(daysRequired(w,m)<=d) r = m;
		else l = m+1;
	}
	cout << l << endl;
	return 0;
}
