#include<bits/stdc++.h>
using namespace std;

int main(){
string input;
bool found = false;
getline(cin,input);
stringstream ss(input);
vector<int> arr;
int num;
while(ss >> num){
	arr.push_back(num);
}
int target;cin >> target;

for(int i = 0 ; i < arr.size() ; i++){
	if(arr[i] == target){
		cout << i;
		found = true;
		break;
	}
}

if(!found)cout <<"Not found";
return 0;
}
