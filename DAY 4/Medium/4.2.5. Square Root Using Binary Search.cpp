#include<bits/stdc++.h>
using namespace std;

int binarysqrt(int n){
	int low = 0 ;
	int high = n ;
	int ans = 0;

	while(low <= high){
		int mid = low+(high-low)/2;
		long long sq = (long long)mid*mid;
		if(sq == n)return mid;
		else if(sq <n){
			ans = mid;low = mid+1;
		}
		else high = mid-1;
	}
	return ans;
}

int main(){
	int n;
	cin >> n;
	cout <<binarysqrt(n);
}
