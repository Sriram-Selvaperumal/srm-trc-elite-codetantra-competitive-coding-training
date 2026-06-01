#include<bits/stdc++.h>
using namespace std;

int main(){
	int res = 0;
	int n; cin >> n;

	for(int i = 0 ; i < n ; i++){
		int num ; cin >> num;
		res ^= num;
	}
	cout << res;
	return 0;
}
