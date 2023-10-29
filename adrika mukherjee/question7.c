// wap to push all the zeroes to the end of an array 
#include <stdio.h> 


void pushingzeroestotheend(int arr[], int n) 
{ 
	int count = {0}; 

	
	for (int i = 0; i < n; i++) 
		if (arr[i] != 0) 
			arr[count++] = arr[i]; 
					


	while (count < n) 
		arr[count++] = 0; 
} 


int main() 
{ 
	int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	pushingzeroestotheend(arr, n); 
	printf("%s\n", "new array after pushing all the zeroes to the end the array:"); 
	for (int i = 0; i < n; i++) 
	printf("%d ", arr[i]); 
	return 0; 
} 
