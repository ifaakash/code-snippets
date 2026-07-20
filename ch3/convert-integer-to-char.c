/*

Input:
- A number

Output:
- ASCII character corresponding to number

ALGORITHM:
Enter input as integer
Do type conversion of integer to char
print the character
*/


#include<stdio.h>
void main(){
  int iinput;
  printf("Enter any character:\n");
  scanf("%d", &iinput);
  printf("The character corresponding to the integer value %d is %c\n", iinput, (char)iinput);
}
