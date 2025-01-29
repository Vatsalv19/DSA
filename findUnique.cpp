#include<stdio.h>

int findunique(int arr[],int size){
	int ans  = 0;
	for(int i = 0; i<size;i++){
		ans  = ans^arr[i];
	}
	return ans;
}


int main(){
	int arr[11] = {4,5,4,6,6,7,7,8,8,5,1};
	findunique(arr,11);
int show = findunique(arr,11);
printf("%d",show);
	return 0;
}