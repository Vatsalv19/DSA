#include<iostream>
using namespace std;

		//----first and last Occrance of element----

	int firstOcc(int arr[],int n,int key){
		int start = 0,end = n-1,mid = start + (end-start)/2;
		int ans = -1;
		while(start<=end){
			if(arr[mid]==key){
			ans = mid;
			end = mid-1;	
			}
			else if(key>arr[mid]){
				start = mid+1;
			}
			else{
				end = mid-1;
			}
			mid = start + (end-start)/2;
		}
		return ans;
	}


		int lastOcc(int arr[],int n,int key){
		int start = 0,end = n-1,mid = start + (end-start)/2;
		int ans = -1;
		while(start<=end){
			if(arr[mid]==key){
			ans = mid;
			start = mid+1;	
			}
			else if(key>arr[mid]){
				start = mid+1;
			}
			else{
				end = mid-1;
			}
			mid = start + (end-start)/2;
		}
		return ans;
	}	
	
int main(){
 int arr[] = {1, 2, 3, 3 , 4, 5, 6, 7};
		
	cout<<"first index of 3 is: "<<firstOcc(arr,5,3)<<endl;
	cout<<"last index of 3 is: "<<lastOcc(arr,5,3);
	
	return 0;
}