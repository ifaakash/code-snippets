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
  return 0;
}
