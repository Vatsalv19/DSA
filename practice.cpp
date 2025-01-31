#include<iostream>
using namespace std;
 
  
 //-----duplicate in Array-----
// int duplicate(int arr[],int n){
// 	for(int i = 0; i<n; i++){
//	 for(int j = i+1; j<n; j++){
//	 	if(arr[i]==arr[j]){
//	 		return arr[i];
//		 }
//	 }	
//
//	 }
//	 return 0;
//}

//void CountOcc(int arr[], int n) {
//    bool counted[n] = {false}; // To track already counted elements
//
//    for (int i = 0; i < n; i++) {
//        if (!counted[i]) {  // Skip already counted elements
//            int count = 1;
//
//            for (int j = i + 1; j < n; j++) {
//                if (arr[i] == arr[j]) {
//                    count++;
//                    counted[j] = true; // Mark as counted
//                }
//            }
//
//            cout << arr[i] << " appears " << count << " times." << endl;
//        }
//    }
//}

		//Swap Alternative Function
//		void swapAlter(int arr[],int n){
//			for(int i = 0; i<n; i=i+2){
//				if(i+1<n){
//					swap(arr[i],arr[i+1]);
//				}
//			}
//		}
		
		//Unique in Array
//		int findunique(int arr[],int size){
//			int ans = 0;
//			for(int i=0;i<size;i++){
//				ans = ans^arr[i];
//			}
//		return ans;
//		}
		
		 int duplicate(int arr[],int n){
		 	int result[n];
 	for(int i = 0; i<n; i++){
	 for(int j = i+1; j<n; j++){
	 	if(arr[i]==arr[j]){
	 		result[n]= arr[i];
	 		
		 }
	 }	

	 }
	 return result[n];
}
		
		
 		void printArray(int arr[],int size){
 			for(int i = 0; i<size;i++){
 				cout<<arr[i]<<endl;
			 }
		 }
 int main(){
 	
 	//Duplicate in Array	
// int arr[5]={1,3,4,5,1}; 
// int result = duplicate(arr,5);
// cout<<"Result : "<<result;

	//Question -2 
//	int arr[5] = {1,2,1,3,4};
////	printArray(arr,5);
//	cout<<"\nAnswer: "<<CountOcc(arr,5);
	 
	 	//Que-3: Swap Alternative elements in array
	 	
//	 	int arr[5] = {1,2,3,4,5};
//	 	
//	 	cout<<"Original Array: "<<endl;
//	 
//	 	printArray(arr,5);
//	 	
//	 	swapAlter(arr,5);
//	 
//	 	cout<<"Swapped Array: \n";
//	 
//	 	printArray(arr,5);
//	 	cout<<endl;

	//Que-4- Unique in Array
	
//		int arr[5] = {1,2,7,1,2};
//		
//	cout<<"Answer : "<<findunique(arr,5);

		//Que-5
		int arr[5]={1,2,1,3,3};
		cout<<duplicate(arr,5);
		
		
 
 return 0;	
 }