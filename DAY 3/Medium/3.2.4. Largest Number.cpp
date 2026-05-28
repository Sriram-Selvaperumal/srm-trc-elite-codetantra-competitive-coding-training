#include<bits/stdc++.h>
using namespace std;

int main(){
	int n ;
	cin >> n;

vector<string> nums(n);
for(int i = 0 ; i < n ; i++){
	cin >> nums[i];
}
sort(nums.begin(),nums.end(),[](const string& a,const string& b){return(a+b)>(b+a);});

if(nums[0] == "0"){
	cout << 0;
	return 0;
}
for(const string &s : nums){
	cout << s;
}
	cout << endl;
	return 0;
}
