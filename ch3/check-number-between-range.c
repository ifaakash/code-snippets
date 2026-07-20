/*

Given:
- a pre-defined range

Input:
- num1

Output:
- If the entered number is between the defined range or not

ALOGRITHM:
- test if input is >= startIndex
- test if input is <= endIndex 
- if none condition satisfies, then the input is out of range
*/

#include<stdio.h>
void main(){
  int inum1;
  int istartIndex, iendIndex;
  istartIndex= 1;
  iendIndex = 50;
  printf("Heyy! Enter the number to validate if it lies in the range of: %d to %d\n", istartIndex, iendIndex);
  scanf("%d", &inum1);
  if(inum1>=istartIndex && inum1<=iendIndex){
    printf("The number %d is in range\n", inum1);
  }
  else
    printf("%d is out of range\n", inum1);
}
