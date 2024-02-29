/*Use a do-while loop to check if a user's input is an even number, prompting them to re-enter if
not.*/

#include<stdio.h>

int main(){

     int a;
     do{
     printf("\nEnter number:");
     scanf("%d",&a);

     if(a%2==1){
     printf("You enter a odd number(%d)so please re-enter even number.\nThank you. \n",a);
     }
     }
     while(a%2==1);

     printf("You have entered even number %d.\n",a);
          
     return 0;
}