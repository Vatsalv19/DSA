#include<iostream>
#include<vector>
using namespace std;

int main(){
	//-----Array----- 
	
//	int normal[5] = {1,2,3,4,5};
//	array<int,4>a = {1,2,3,4};
//	cout<<"front element of a: "<<a.front()<<endl;
//	cout<<"back element of a: "<<a.back()<<endl;
//	cout<<"Is array is empty: "<<a.empty()<<endl;

//---------------------------------------------------

	//-----Vector-----
	
	vector<int>v;
	vector<int>a(5,1); //vector with some value
	
	for(int i :a)
	cout<<"capacity : "<<v.capacity()<<endl;
	
	v.push_back(1);
	cout<<"capacity : "<<v.capacity()<<endl;

	v.push_back(2);
	cout<<"capacity : "<<v.capacity()<<endl;
	
	v.push_back(3);
	cout<<"capacity : "<<v.capacity()<<endl;
	cout<<"Size: "<<v.size()<<endl;
	
	v.push_back(6);
	cout<<"capacity : "<<v.capacity()<<endl;
	cout<<"Size: "<<v.size()<<endl;
	int size = v.size();
	
	for(int i = 0; i<size; i++){
		cout<<"All elements at index "<<i<<" "<<v[i]<<endl;
	}
	
	v.pop_back();
	for(int i:v){
		cout<<"After pop back: "<<i<<endl;
	}
	
	v.clear();
		cout<<"After clear the size is : "<<v.size()<<endl;
		cout<<"After clear the capacity is : "<<v.capacity()<<endl;
	
	return 0;
}