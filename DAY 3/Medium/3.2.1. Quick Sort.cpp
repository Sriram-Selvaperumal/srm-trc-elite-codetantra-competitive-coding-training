#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& a,int low,int high){
	int pivot = a[high],i = low -1;
for(int j = low; j < high ; j++)
	if(a[j]<=pivot)swap(a[++i],a[j]);
	swap(a[i+1],a[high]);
	return i+1;
}

void quicksort(vector<int>&a , int low,int high){
	if(low<high){
		int p = partition(a,low,high);
		quicksort(a,low,p-1);
		quicksort(a,p+1,high);
	}
}

int main(){
	vector<int> a;
	string line;
	getline(cin,line);
	istringstream iss(line);
	int x;
	while(iss >> x)a.push_back(x);
	quicksort(a,0,a.size()-1);
	for(int i = 0 ; i < (int)a.size();i++){
		cout << (i?" ":"")<<a[i];
	}
}
