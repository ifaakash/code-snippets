/*

Input:
- number 1
- number 2

Output:
- numbers between the range of num1 and num2

ALGORITHM:

// for loop

start from num1, reach till num2

5 - 10
5, 6, 7, 8, 9, 10

Each time the increment is +1
int i=num1; i<=num2; i++

*/

// Single line comment
/* Multi line comment */ 

#include<stdio.h>

void main(){
  printf("Heyyy! Enter two numbers with num1 as startFrom and num2 as endAt\n");
  int inum1, inum2;
  scanf("%d\n%d", &inum1, &inum2);
  if(inum1>inum2)
    printf("The condition for this program is to have the start as smaller or equal to the end number, pl fix this!");
  else
  {
  for(int i=inum1; i<=inum2;i++){
    // \t gives 4 whitespace
    printf("%d\t", i);
    }
  }
} 
