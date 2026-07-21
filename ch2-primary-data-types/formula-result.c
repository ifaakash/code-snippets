/*

Input:
- Four numbers a,b, x and y
- Formula is given as:
  - f=(a-b)(x-y)
- Use single printf()
*/

#include<stdio.h>

int main(){
  int a,b,x,y,f;
  scanf("%d\n%d\n%d\n%d", &a,&b,&x,&y);
  f=(a-b)*(x-y);
  printf("Output of formula f=(%d-%d)*(%d-%d) is: %d",a,b,x,y,f);
  return 0;
  
}
