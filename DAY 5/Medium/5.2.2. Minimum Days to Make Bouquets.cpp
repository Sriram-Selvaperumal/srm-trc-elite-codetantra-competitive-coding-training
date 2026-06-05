#include<bits/stdc++.h>
using namespace std;

bool bq(vector<int> &days,int m , int k , int day){
	int b= 0 ,f = 0;

	for(int bloom : days){
		if(bloom <= day){
			f++;
			if(f == k){
				b++;
				f=0;
			}
		}
		else f = 0;
	}
	return b >= m;
}

int main(){
	int n,m,k;
	cin >>n >> m >> k;

	vector<int> days(n);
	for(int i = 0 ; i < n ;i++)cin >> days[i];

	if(m*k>n){
		cout << -1;
		return 0;
	}

	int low = *min_element(days.begin(),days.end());
	int high = *max_element(days.begin(),days.end());

	while(low < high){
		int mid = low+(high-low)/2;

		if(bq(days,m,k,mid))high = mid;
		else low = mid+1;
	}
	cout << low;
	return 0;
}
