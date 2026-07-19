/*

Input:
- NA


Output:
- Print the value of null character

ALGORITHM:

character variable = '\0'
print the variable

*/


#include<stdio.h>
int main(){
  char cnullCharacter='\0';
  printf("Do you want to input any character?\n");
  scanf("%c", &cnullCharacter);
	printf("\n%c\n", cnullCharacter);
	if(cnullCharacter == '\0')
	  printf("This program is having the if condition true over a null character");
	else
	  printf("This is a character variable with value as %c", cnullCharacter);
  return 0;
}
