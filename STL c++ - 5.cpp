#include<iostream>
#include<map>
using namespace std;

int main(){
	//Map me Key value pair me data save hota hai
	map<int,string> m;
	
	m[1] = "vatsal";
	m[2] = "shukla";
	m.insert({5,"hello"
	});
	cout<<"before Erase: "<<endl;
	for(auto i:m){
		cout<<i.first<<" "<<i.second<<endl;
	}
	cout<<endl;
	cout<<"Finding 2: "<<m.count(2)<<endl;
	cout<<"Finding 7: "<<m.count(7)<<endl;
	
	m.erase(2);
	cout<<endl;
	cout<<"After Erase: "<<endl;
		for(auto i:m){
		cout<<i.first<<" "<<i.second<<endl;
	}
	return 0;
}

