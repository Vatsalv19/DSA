#include<iostream>
using namespace std;

	void Reverse(int arr[],int n){
		int start = 0;
		int end = n-1;
		while(start<=end){
			swap(arr[start],arr[end]);
			start++;
			end--;
	}
}
	void printArray(int arr[],int size){
		for(int i = 0; i<size; i++){
			cout<<arr[i]<<"";
		}
	}
int main(){
		int arr[5] = {2,3,4,5,6};
		Reverse(arr,5);
	printArray(arr,5);
	return 0;
}