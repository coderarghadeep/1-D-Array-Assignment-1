#include <stdio.h>
void pushZerosToEnd(int array[], int size) 
{ 
	int c= 0;
	for (int i = 0; i < size; i++) 
		if (array[i] != 0) 
			array[c++] = array[i]; 
								

	while (c < size) 
		array[c++] = 0; 
} 
 int main() 
{ 
	int array[] = {1,7,0,0,6,0,0,4,9}; 
	int size = sizeof(array) / sizeof(array[0]); 
	pushZerosToEnd(array, size); 
	printf("%s\n", "Array after pushing all zeros to end :"); 
	for (int i = 0; i < size; i++) 
	printf("%d ", array[i]); 
	return 0; 
}