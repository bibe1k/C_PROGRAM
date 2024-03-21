//Write a program to print the address of array elements.

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
    
    printf("Addresses of array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Address of arr[%d]: %p\n", i, (void *)&arr[i]);
    }
    
    return 0;
}
