#include<iostream>
using namespace std;


void merge(int *arr,int start,int end){
	int mid = (start + end)/2; 
	int len1 = mid -start + 1;
	int len2 = end -mid;
	
	int *first = new int[len1];
	int *second = new int[len2];
	
	//Copy values
	int mainarrayindex = start;
	for(int i = 0; i < len1; i++){
		first[i] = arr[mainarrayindex++];
	}


 mainarrayindex = mid+1;
	for(int i = 0; i < len2; i++){
		second[i] = arr[mainarrayindex++];
	}
	
	//merge 2 sorted array
	int index1 = 0;
	int index2 = 0;
	mainarrayindex = start;
	
	while(index1 < len1 && index2 < len2){
	if(first[index1] < second[index2]){
		arr[mainarrayindex++]  = first[index1++];
		
	}	
	else{
		arr[mainarrayindex++] = second[index2++];
	}
	}
	while(index1 < len1){
		arr[mainarrayindex++]  = first[index1++];
	}
	
	
	while(index2 < len2){
		arr[mainarrayindex++]  = second[index2++];
	}

	delete first;
	delete second;	
}

void mergesort(int arr[],int start,int end){
	//base case
	if(start >= end){
		return;
	}
	int mid = (start+end)/2;
	
	//left part sort karne k liye
	mergesort(arr,start,mid);
	
	//right part sort karne k liye
	mergesort(arr,mid+1,end);
	
	//merge
	merge(arr,start,end);
}


int main(){
	int arr[5] = {31,45,67,78,41};
	int n = 5;
	mergesort(arr,0,n-1);
	for(int i = 0; i<n; i++){
		cout << arr[i]<<" ";
	}cout <<endl;
}