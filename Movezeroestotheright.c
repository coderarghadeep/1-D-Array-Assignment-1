 #include <stdio.h>

void moveZeroesToTheRight(int arr[], int n) {
    int count = 0; 

    
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }

    
    while (count < n) {
        arr[count] = 0;
        count++;
    }
}

int main() {
    int n, i;
    printf("Enter the size of the elements: ");
    scanf("%d", &n);
    printf("Enter the %d elements:\n", n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Array with zeroes moved to the right while maintaining the sequence of the non-zero elements:\n");
    for(i=0;i<n;i++){
    	printf("%d",arr[i]);
	}
	return 0;
}


