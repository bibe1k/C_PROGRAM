// Write a program to find the HCF and LCM of two numbers.

#include<stdio.h>

int main() {
  int num1, num2, hcf, lcm;

  printf("Enter a number1: ");
  scanf("%d", &num1);

  printf("Enter a number2: ");
  scanf("%d", &num2);

  for (int i = 1; i <= num1 && i <= num2; i++){
    if(num1%i==0 && num2%i==0){
      hcf = i;
    }
  }

  lcm = (num1 * num2) / hcf;

  printf("The hcf of two number %d and %d is %d\n", num1, num2, hcf);
  printf("The lcm of two number %d and %d is %d\n", num1, num2, lcm);

  return 0;
}