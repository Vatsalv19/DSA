#include<stdio.h>

bool search(int arr[],int size,int key){
	for(int i = 0;i<size;i++){
		if(arr[i]==key){
			return 1;
		}
	}
	return 0;
}

int main(){
	int arr[5]={5,4,3,21,1};
	int key;
	printf("Enter the Key: ");
	scanf("%d",&key);
	bool found = search(arr,5,key);
	if(found){
		printf("Key is present");
	}
else{
	printf("Key is not present");
}
return 0;
}