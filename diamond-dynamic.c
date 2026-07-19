#include <stdio.h>

int main(){
    int height;
    printf("Enter height\n");
    scanf("%d", &height);
    if(height%2==0){
    	height++;
    }
    int mid = height/2;
    for(int i=0;i<=mid;i++){
    	for(int j=0;j<=height;j++){
    	  if(j>=mid-i && j<=mid+i)
    	     printf("*");
    	  else
    	     printf(" ");
    	}
    	printf("\n");
    }
    for(int i=mid+1;i<height;i++){
    	for(int j=0;j<height;j++){
    		if(j>=(i-mid) && j<=((height-1+mid)-i))
    	      printf("*");
    	    else
    	      printf(" ");
    	}
    	printf("\n");
    }
    /*
    printf("-------- LOWER HALF ----------\n");
    for(int i=4;i<=6;i++){
    	for(int j=0;j<=5;j++){
    		if(j>=i-3 && j<=9-i){
    			printf("*");
    		}
    		else
    		  printf(" ");
    	}
    	printf("\n");
    }
    */
	return 0;
}
