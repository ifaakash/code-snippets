/*

Input:
- num1

Output:
- How many iteration does the user took to guess the number

ALGORITHM:
random_number = rand() % 10;
count =0
take guess number from user
start loop while guess guess = random_number
   counter ++

*/


#include<stdio.h>
#include<stdlib.h>
int main(){
  int iuserInput;
  int icounter=0;
  int irandom;
  irandom= rand()%10;
  while(iuserInput != irandom){
    printf("Guess the number!\n");
    scanf("%d", &iuserInput);
    if(iuserInput == irandom)
     {
       printf("Good guess!\n");
       printf("You took %d guess", icounter);
    }
    else    
      printf("The number is not correct! Lets try again!\n");
      icounter++;
  }
  return 0;
}
