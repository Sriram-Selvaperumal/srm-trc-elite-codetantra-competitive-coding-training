#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> arr(n);
int min_num = INT_MAX;

for(int i = 0 ; i < n; i++){
	int num ; cin >> num;
	if(num < min_num)min_num = num;
	arr[i] = num;
}
int k; cin >> k;

while(k!=0){
	int temp = arr[n-1];
	arr.erase(arr.begin()+n-1);
	arr.insert(arr.begin(),temp);
	k--;
}

for(int i = 0 ; i < n ;i++)i != n-1 ? cout << arr[i]<<' ' : cout << arr[i]<<'\n';
cout << min_num;
return 0;
}
