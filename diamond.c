/*
---------------- MULTI LINE COMMENT -----------------

---*---
--*-*--
-*---*-
*-----*

total columns = 8

zero = 3
first = 2,4
second  = 1,5
third = 0,6
fourth = 1,5
fifth = 2,4
sixth = 3  

Assumption:
1. Rows = Columns
2. Indexing starts from zero

Input:
1. Count of rows/column


---------------- MULTI LINE COMMENT -----------------
*/

// ---------------- PG1 -----------------

/*

******
******
******
******
******
******

#include <stdio.h>

int main()
{
  for(int i=0;i<=5;i++){
  	for(int j=0;j<=5;j++){
  		printf("*");
  	}
  	printf("\n");
  }
  return 0;
}

// ---------------- PG2 -----------------

******
*****
****
***
**
*

*/

#include <stdio.h>

int main()
{
  for(int i=0;i<=5;i++){
  	for(int j=0;j<=5;j++){
  		if(i<=j){
  			printf("*");
  		}
  	}
  	printf("\n");
  }
  return 0;
}
