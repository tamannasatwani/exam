#include <stdio.h>

#define SIZE 5  

void sumArrays(int *arr1, int *arr2, int *result, int size) {
    int i; 
    for (i = 0; i < size; i++) {  
        *(result + i) = *(arr1 + i) + *(arr2 + i);  
    }
}

int main() {
    int arr1[SIZE], arr2[SIZE], result[SIZE];
    int i; 

    printf("Enter %d elements for first array:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", (arr1 + i));  
    }

    printf("Enter %d elements for second array:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", (arr2 + i));
    }

    sumArrays(arr1, arr2, result, SIZE);

    printf("Sum of both arrays:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", *(result + i));
    }
    
    return 0;
}


