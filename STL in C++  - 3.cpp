#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){
	//------stack--------
//	stack<string>s;
//	s.push("Vatsal");
//	s.push("shukla");
//	s.push("Hello");
//	int size = s.size();
//	
//	cout<<s.top()<<endl;
//	 
//	s.pop();
//	cout<<"After popped: "<<s.top()<<endl;
//	cout<<size;
	//--------------------------------
	
	//----------Queue-----------
//	 queue<string> q;
//	 q.push("Vatsal");
//	 q.push("Shukla");
//	 q.push("HEYY");
//	 
//	 cout<<q.front()<<endl;
//	 
//	 q.pop();
//	 cout<<q.front()<<endl;
//	 cout<<"size after pop: "<<q.size()<<endl;
	 //-------------------------------
	 
	 //--------Priority Queue---------
	  //Max heap
	  priority_queue<int> maxi;
	  
	  //min heap
	  priority_queue<int,vector<int>, greater<int>> mini;
		
		maxi.push(1);
		maxi.push(3);
		maxi.push(5);
		maxi.push(0);
		int n = maxi.size();
		cout<<"Size: "<<n<<endl;
		for(int i= 0 ; i<n; i++){
			cout<<maxi.top()<<endl;
			maxi.pop();
		}
	  	cout<<endl;
	  	mini.push(10);
	  	mini.push(11);
	  	mini.push(9);
	  	mini.push(1);
	  	
	  	int size = mini.size();
	  	
	  	for(int i = 0; i<n; i++){
	  		cout<<mini.top()<<endl;
	  		mini.pop();
		  }
	  	
}