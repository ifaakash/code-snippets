/*

Input:
- NA

Output:
- Seq from 1 to 100 with increment 5

ALGORITHM:
Start a while loop from 1 to <=100
increment of +5 on each iteration

*/

#include<stdio.h>
int main(){
  int i=0;
  while(i<=100){
    printf("%d\n", i);
    i +=5;
  }
  printf("----------------- PRINTING MULTIPLE OF 5 -----------------\n");
  i=1;
  while(i<=20){
    printf("%d\n", i*5);
    i++;
  }
  
  printf("----------------- PRINTING UPTO 100 with INCREMENT OF 5 -----------------\n");
  i=1;
  while(i<=100){
    printf("%d\n", i);
    i +=5;
  }
  return 0;
}
