#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	vector<int>v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(7);
	
	cout<<"Finding 2 index is : "<<binary_search(v.begin(),v.end(),2)<<endl;
	
		
	return 0;
}