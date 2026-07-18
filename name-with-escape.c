#include <stdio.h>


char name(){
  char name[]= "ifaakash";
  printf("My name is %s\n", name);
}

int main(){
  // printf("hello");
  printf("\n------------ Introduction -------------\n");
  name();
  fflush(stdout);
  printf("\n------------ Using escape characters -------------\n");
  printf("I am trying to escape the quote\'s in this statement");
}
