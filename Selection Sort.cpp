#include<iostream>
using namespace std;
//Selection Sort
        void selectionsort(int arr[],int n){
		for(int i = 0; i<n-1; i++){
		int minIndex = i;
			for(int j = i+1; j<n; j++){
			if(arr[j]<arr[minIndex]){
				minIndex = j; 
			}
			
		}
		swap(arr[minIndex],arr[i]);			
		}	
	}
	
	void printArray(int arr[],int n){
		for(int i = 0; i<=n; i++){
			cout<<arr[i];
		}
	}

int main(){
	int arr[5] = {2,1,7,1,3};
	selectionsort(arr,5);
	printArray(arr,5);
	
	return 0;
}