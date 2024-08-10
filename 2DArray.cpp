#include<stdio.h>

//------Linear Search------------

bool ispresent(int arr[][4],int target,int row,int col){
	for(int row = 0; row <3; row++){
		for(int col = 0; col < 4; col++){
			if(arr[row][col] == target){
				return 1;
			}
		}
	}
return 0;

}


int main(){
	int arr[3][4]; /*{1,2,3,4,5,6,7,8,9,10,11,12};*/

//User input

	for(int i =0; i<3; i++){
		for(int j=0; j<4; j++){
 		scanf("%d",&arr[i][j]);
		
	}
}

//-------Printing Array------

	for(int i =0; i<3; i++){
		for(int j=0; j<4; j++){
		printf( " %d ",arr[i][j]);
		
	}
	printf("\n");
}
printf("Enter the target: ");
int target = scanf("%d",&target);

if(ispresent(arr,target,3,4)){
	printf(" Found!");
}
else{
	printf("Not present");
}
	return 0;
}