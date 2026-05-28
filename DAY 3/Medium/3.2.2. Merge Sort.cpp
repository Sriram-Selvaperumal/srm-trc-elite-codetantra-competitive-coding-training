#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr,int l , int m , int r){
	vector<int>L(arr.begin()+l,arr.begin()+m+1);
	vector<int>R(arr.begin()+m+1,arr.begin()+r+1);
	int i = 0 , j = 0, k = l;
while(i<L.size()&&j<R.size())arr[k++] = (L[i]<= R[j])?L[i++]:R[j++];
while(i<L.size())arr[k++]=L[i++];
while(j<R.size())arr[k++]=R[j++];
}

void mergesort(vector<int>&arr , int l , int r){
	if(l>=r) return;
	int m = l+(r-l)/2;
	mergesort(arr,l,m);
	mergesort(arr,m+1,r);
	merge(arr,l,m,r);
}

int main(){
	int n; cin >> n;
	vector<int> arr(n);
	for(int i = 0 ; i < n ;i++)cin >> arr[i];
	mergesort(arr,0,n-1);
	for(int i : arr)cout << i <<' ';
	return 0;
}
