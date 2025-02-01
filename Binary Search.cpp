#include<iostream>
using namespace std;

	int binarysearch(int arr[],int n,int key){
		int start = 0;
		int end = n-1;
		int mid = start + (end - start) / 2;
		
		while(start<=end){
			if(arr[mid]==key){
				return mid;
			}
			//Go to Right Part
			if(key > arr[mid]){
				start = mid+1;
			}
			else{
				end = mid-1;
			}
		 mid = start + (end - start) / 2;
		}
		return false;
	}

int main(){
	int even[10]={2,4,6,8,10,12,14,18,20,22};
	int odd[10]={3,5,7,9,11,13,15,17,19,21};
	
	int index = binarysearch(even,10,6);
	cout<<"index of 10 is: "<<index;
	
	int oddindex = binarysearch(odd,10,9);
	cout<<"\nindex of 9 is: "<<oddindex;
	return 0;
}