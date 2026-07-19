/*

Input:
- Price
- Quantity

Output:
- Revenue

ALGORITHM:
- Revenue = price*quantity

*/

#include<stdio.h>
int main(){
  int  iquantity;
  float fprice;
  printf("Enter the Quantity of products:\n");
  scanf("%d", &iquantity);
  printf("Enter the price for one product:\n");
  scanf("%f", &fprice);

  float frevenue = (fprice*iquantity);
  printf("Total revenue is: %.2f", frevenue);

  return 0;
}
