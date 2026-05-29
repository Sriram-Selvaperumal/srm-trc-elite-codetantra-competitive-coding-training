#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;cin >> n;
	vector<vector<int>> arr(n,vector<int>(2));

	for(int i = 0 ; i < n ; i++){
		cin >> arr[i][0];
		cin >> arr[i][1];
	}

	vector<int> st,et;
	for(int i = 0 ; i < n; i++){
		st.push_back(arr[i][0]);
		et.push_back(arr[i][1]);
	}

	sort(st.begin(),st.end());
	sort(et.begin(),et.end());

	int room = 0 , max_room = 0;
	int i = 0, j = 0;

	while(i < n){
		if(st[i]<et[j]){
			room++;i++;
		}
		else{
			room--;
			j++;
		}
		max_room = max(max_room,room);
	}
	cout << max_room;
	return 0;
	}









