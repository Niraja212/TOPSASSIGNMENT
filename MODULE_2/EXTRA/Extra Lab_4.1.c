/*Write a C program that accepts 10 integers from the user and 
stores them in an array.The program should then find and print 
the maximum and minimum values in the array.*/ 

#include<stdio.h>
main(){
	int a[10],i;
	printf("\n enter the array elements");
	for(i=0;i<10;i++){
	printf("\n a[%d]=",i);
	scanf("%d",&a[i]);
    }
    
    for(i=0;i<10;i++){
	scanf("%d",a[i]);
    }
    printf("\n ");
}

/*Extend this to handle a two-dimensional array (3x3 matrix) 
and calculate the sum of all elements. */

int a[3][3],b[3][3],sum[i][j],i,j;

for(i=0;i<2;i++){
	 	for(j=0;j<2;j++){
	 		printf("\n enter a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
	     	}
		}
			printf("\n=========\n");
			for(i=0;i<2;i++){
	     	    for(j=0;j<2;j++){
			printf("\n enter b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		    }
		}
			printf("\n====addition of array=====\n");
			for(i=0;i<2;i++){
	 	    for(j=0;j<2;j++){
			sum[i][j]= a[i][j] + b[i][j];      		
			 }
        }
			
		for(i=0;i<2;i++){
	 	for(j=0;j<2;j++){
	 		printf("\ta[%d][%d]=%d",sum[i][j]);	
		 }
		 printf("\n");
	 }
}


