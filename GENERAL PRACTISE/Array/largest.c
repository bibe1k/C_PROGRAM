#include<stdio.h>

int main(){

    int arr[5];

    printf("Enter numbers: ");

    for(int i=0; i<5; i++){

        scanf("%d", &arr[i]);
    }
for (int i=0; i<5; i++){
    if(arr[i]>arr[1]){
        arr[1]=arr[i];
    }
}

printf(" The greatesr number is %d :", arr[1]);



    return 0;

}