#include<iostream>
using namespace std;

	//Palendrom
	bool palendrom(char ch[],int n){
			for(int i = 0,j=n-1;i<j;i++,j--){
			if(ch[i] != ch[j]){
				return 0;
			}
		}
		
		return 1;
	}


	void reverse(char ch[],int n){
		int s= 0;
		int e=n-1;
		
		while(s<e){
	 swap(ch[s],ch[e]);
			s++;
			e--;
		}
	}
	
	int getlength(char name[]){
		int count = 0;
		for(int i = 0; name[i]!='\0'; i++){
			count++;
		}
		return count;
	}

int main(){
	char ch[10];
	cout<<"enter char: ";
	cin>>ch;
	cout<<"Value is: "<<ch<<endl;;	
	cout<<"Length: "<<getlength(ch)<<endl;
	
	//Reverse String
	reverse(ch,6);
	cout<<"Reversed String : "<<ch;
	
	//Palendrom
	
	if(palendrom(ch,4)){
		cout<<"yes it is palendrom";
	}
	else
	cout<<"No, not really!";
	return 0;
}
