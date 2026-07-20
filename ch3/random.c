/*

Input:
- NA

Ouput:
- A random number

ALGORITHM:

Just use the random() function
x= random()
print value 

*/

#include<stdio.h>
#include<stdlib.h>

void main(){
  for(int i=0;i<11;i++){    
  int irandomNumber = rand()%(i + 1);
  printf("The random number generated is %d\n", irandomNumber);
  }
}

