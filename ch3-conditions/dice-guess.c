/*

Input:
- Wanna roll the dice or not? Yes or no

Output:
- Sum of the dice numbers

ALGORITH:
- Input choice - Y or N
- If yes
   generate two random numbers
   sum these numbers
   if sum==7 or sum==11:
      print user win
   else
      print thanks for playing
      print the sum
- if no
    exit the loop

*/


#include<stdio.h>
#include<stdlib.h>
int main(){
  /*
  char cchoice='/0';
  printf("Do you want to play the same? Enter Y to continue or N to exit\n")
  scanf("%c", cchoice);
  */

  int idice1, idice2, isum=0;
  idice1= rand()%7;
  idice2= rand()&7;
  isum = idice1+idice2;
  printf("Number on dice 1 - %d\n", idice1);
  printf("Number on dice 2 - %d\n", idice2);
  if(isum ==7 || isum==11){
    printf("player wins\n");
    printf("You got %d on dice\n", isum);
  }
  else
    printf("You got %d on dice\n", isum);
  return 0;
}
