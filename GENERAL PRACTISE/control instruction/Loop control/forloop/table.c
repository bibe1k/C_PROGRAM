// Include the standard input/output header file.
#include<stdio.h>
int main() {


// Declare variables for for loop for user input
    int n;

    printf(" enter number: ");
    scanf("%d", &n);

    printf("Table is:\n", n);

// Start a for loop to calculate the table up to 10.
for (int i =1; i<=10; i++ )
{
    printf (" %d * %d = %d \n",n,i,n*i);
    
}
return 0;
}
