#include<iostream>
using namespace std;
 //Bubble Sort
 	void bubblesort(int arr[],int n){
 		for(int i = 0; i<n-1; i++){
 			for(int j = 0; j<n-1; j++){
 				if(arr[j]>arr[j+1]){
 					swap(arr[j],arr[j+1]);
				 }
			 }
		 }
	 }
 	void printarray(int arr[],int n){
 		for(int i =0 ; i<n; i++){
 			cout<<arr[i];
		 }
	 }
 
 int main(){
 	int arr[5] = {2,6,8,1,3};
	 	bubblesort(arr,5);
	 	printarray(arr,5);
 	return 0;
 }