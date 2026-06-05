#include<bits/stdc++.h>
using namespace std;
bool canAssign(vector<int> &books,int students,int mp){
	int c = 1 , p = 0;

	for(int book : books){
		if(p+book <=mp){
			p+=book;
		}
		else{
			c++;
			p = book;
			if(c>students)return false;
		}
	}
	return true;
}

int main(){
	int n,m;
	cin >> n >> m;
int low = 0 , high = 0;
	vector<int>books(n);

	for(int i = 0 ; i < n ; i++){
		cin >> books[i];
		low = max(low,books[i]);
		high += books[i];
	}

	if(m>n){
		cout << -1;
		return 0;
	}

	while(low < high){
		int mid = low +(high-low)/2;

		if(canAssign(books,m,mid))high = mid;
		else low = mid+1;
	}
	cout << low;
	return 0;
}
