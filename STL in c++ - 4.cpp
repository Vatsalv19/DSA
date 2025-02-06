#include<iostream>
#include<set>
using namespace std;

int main(){
	//-----set-----
	//In set no duplicate elements are stored 
	//only one unique element can be stored in sets.
	set<int>s;
	s.insert(1);
	s.insert(1);
	s.insert(1);
	s.insert(1);
	s.insert(2);
	s.insert(2);
	s.insert(3);
	s.insert(4);
	s.insert(4);
	
	for(int i : s){
		cout<<i<<endl;
	}
	cout<<endl;
	s.erase(s.begin());
		for(int i : s){
		cout<<i<<endl;
	}
	cout<<endl;
	cout<<s.count(5);
	
	return 0;
}