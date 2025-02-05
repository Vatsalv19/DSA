#include<iostream>
#include<deque>
#include<list>
using namespace std;

int main(){
	
	//------Dequeue--------
	
//	deque<int>d;
//	d.push_back(2);
//	d.push_front(1);
//	for(int i:d){
//		cout<<i<<endl;
//	}
////	d.pop_front();
////	for(int i:d){
////		cout<<"front Popped : "<<i<<endl;
////	}
//	cout<<"at front: "<<d.front()<<"";
//	cout<<"at back: "<<d.back()<<"";
//	cout<<"Print first index element: "<<d.at(1);

//-----------------------------------------

	///-------list----------
	list<int> l;
	list<int>n(l); //l list elements get copied in n
	
	

	l.push_back(1); //same for pop_back()
	l.push_front(2);
	for(int i:l){
		cout<<i<<endl;
	}
	l.erase(l.begin()); //to erase element
	cout<<"After erase"<<endl; 
		for(int i:l){
		cout<<i<<endl;
	}
	 int size = l.size();
	 cout<<"Size: "<<size;	
	 return 0;
}