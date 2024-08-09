#include<stdio.h>

//bool issorted(int arr[],int size){
//
//	//base case
//	
//	if(size == 0 || size == 1){
//		return true;
//	}
//	if(arr[0] > arr[1]){
//		return false;
//	}
//	else{
//		bool remainingpart = issorted(arr + 1,size - 1);
//	return remainingpart;
//	}
//}
//
//
//int main(){
//int arr[5] = {1,2,9,9,9};
//int size = 5;
//bool ans = issorted(arr,size);
//	if(ans){
//		printf("array is sorted ");
//		
//	}
//	else{
//		printf("Unsorted array");
//	}
//return 0;
//}

int getsum(int arr[],int size){
	if(size == 0){
		return 0;
	}
	if(size == 1){
		return arr[0];
	}
	else{

	int remainingpart = getsum(arr + 1, size - 1);
	int sum = arr[0] + remainingpart;
	return sum;
		}
}

int main(){
int arr[5] = {1,1,1,1,1};
int size = 5; 
int sum = getsum(arr,size);
printf("Sum is : %d",sum);
return 0;
}