/*

Input:
- height of the diamond tower

Output:
- Increasing tower of dimaond

*
**
***
****
*****

ALGORITHM:

- Take two variable i and j
- i denote the rows
- j denote the columns
- If i= 0, then j print at 0
- If i = 1, then j print on 0 and 1
- If i = 2, then j print on 0, 1 and 2

OUTPUT CONDITION:
- Print * till j<=i
- else space
- for each completion of iteration of i, enter new line using escape sequence \n

*/


#include<stdio.h>

int main(){
  int height;
  printf("Enter the height for the diamond tower\n");
  scanf("%d",&height);

  for( int i=0; i<height; i++){
    for( int j=0; j<height; j++){
      if( j<=i )
        printf("*");
      else
        printf(" ");
    } // column loop ends here
    printf("\n");  // enter new line after each row completion
  }
  return 0;
}
