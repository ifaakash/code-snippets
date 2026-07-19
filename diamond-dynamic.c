#include <stdio.h>

int main(){
    int iheight;
    printf("Enter height\n");
    scanf("%d", &iheight);
    if(iheight%2==0){
    	iheight++;
    }
    int mid = iheight/2;
    for(int i=0;i<=mid;i++){
    	for(int j=0;j<=iheight;j++){
    	  if(j>=mid-i && j<=mid+i)
    	     printf("*");
    	  else
    	     printf(" ");
    	}
    	printf("\n");
    }
    for(int i=mid+1;i<iheight;i++){
    	for(int j=0;j<iheight;j++){
    		if(j>=(i-mid) && j<=((iheight-1+mid)-i))
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
