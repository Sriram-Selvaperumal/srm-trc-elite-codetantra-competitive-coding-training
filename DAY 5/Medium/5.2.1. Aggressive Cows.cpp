#include<bits/stdc++.h>
using namespace std;

int main(){
int n,c;
cin >> n >>c;

vector<int> stalls(n);
for(int i = 0 ; i < n ;i++)cin >> stalls[i];


sort(stalls.begin(),stalls.end());

int l = 0;
int h = stalls[n-1]-stalls[0];
int ans = 0;

while(l <= h){
	int mid = (l+h)/2;

	int cows =1;
	int last = stalls[0];

	for(int i = 0 ; i < n ; i++){
		if(stalls[i] - last >= mid){
			cows++;
			last = stalls[i];
		}
	}
	if(cows >= c){
		ans = mid;
		l = mid+1;
	}else{
		h = mid-1;
	}
}
	cout << ans;
	return 0;
}
