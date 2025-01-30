#include<stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}
void printarray(int arr[],int size){
for(int i = 0;i<size;i++){
	printf("%d\n",arr[i]);
}
}

int main(){
	int arr[5]={1,2,3,4,5};
	int brr[5]={45,23,14,75,66};
	
	reverse(arr,5);
	reverse(brr,5);
	
	printarray(arr,5);
	printarray(brr,5);
return 0;
}