#include<stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	int ** arr = new int*[n];
	
	for(int i = 0; i<n; i++){
		arr[i] = new int[n];
	}
	//Taking input
		for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	//Output
	
	    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    //Releasing memory
    for(int i =0; i<n; i++){
    	delete[] arr;
	}
	return 0;	
}