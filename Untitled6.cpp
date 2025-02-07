#include<iostream>
#include<stack>
using namespace std;

int main(){
	stack<string>s;
	s.push("Vatsal");
	s.push("shukla");
	int size = s.size();
	cout<<s.top();
	return 0;
}