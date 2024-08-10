#include<stdio.h>


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble(int arr[],int size){
	for(int i = 0; i<size-1; i++){
		for(int j = 0; j<size-i; j++){
			if(arr[j] > arr[j+1])
			swap(&arr[j],&arr[j+1]);
		}
	}
}


void printarray(int arr[],int size){
for(int i = 0;i<size;i++){
	printf("%d\n",arr[i]);
}
}

int main(){
	int arr[5] = {2,1,3,8,3};
	bubble(arr,5);
	printarray(arr,5);
	return 0;
}