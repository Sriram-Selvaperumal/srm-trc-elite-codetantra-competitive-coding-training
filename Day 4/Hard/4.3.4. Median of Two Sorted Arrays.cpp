#include<bits/stdc++.h>
using namespace std;

int main(){
int n; cin >> n;
vector<int> arr;

for(int i = 0 ; i < n ; i++){
	int num; cin >> num;
	arr.push_back(num);
}

int m ; cin >> m;

for(int i = 0 ; i < m ;i++){
	int num; cin >> num;
	arr.push_back(num);
}
int total = n+m;
sort(arr.begin(),arr.end());
double median = 0;
if(total%2 != 0)median = (double)arr[total/2];
else{median = ((double)arr[total/2-1]/2.0)+((double)arr[total/2]/2.0);}

cout << fixed << setprecision(5)<<median;
return 0;
}
