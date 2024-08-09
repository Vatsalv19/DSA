#include<stdio.h>

int binarySearch(int arr[],int size,int key){
	int start = 0;
	int end = size-1;
	int mid = (start+end/2);
	
	while(start<=end){
		if(arr[mid]==key){
			return mid;
		}
		//GO TO RIGHT PART
		if(key>arr[mid]){
			start = mid+1;
		}
		else{
			end = mid-1;
		}
		mid = (start+end)/2;
	}
	return -1;
}

int main(){
	int even[5] = {2,4,6,8,10};
	int index = binarySearch(even,5,4);
	printf("index is 4 is %d ",index);
	return 0;
}

