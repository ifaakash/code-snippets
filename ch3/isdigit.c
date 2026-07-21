/*
Input:
- num1

Output:
- Is the number digit or not?

ALGORITHM:
Use the isdigit function and pass the input value
If digit;
   print "true"
else
   print "false"
*/


#include<ctype.h>
#include<stdio.h>
int main(){
  char cnum1;
  printf("Enter the number to validate if thats is a digit or not\n");
  scanf("%c", &cnum1);
  if(isdigit(cnum1))
     printf("true");
  else
     printf("false");
  return 0;
}
