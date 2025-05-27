/*Write a C program that accepts 5 integers from the user and 
stores them in an array..*/ 

#include<stdio.h>
main(){
	int a[5],i;
	printf("\n enter the 5 array elements: \n");
	for (i=0;i<5;i++){
	printf("\n a[%d]=",i);
	scanf("%d",&a[i]);
    }
    
    for (i=0;i<5;i++){
	scanf("%d",&a[i]);
    }


/*Extend this to handle a two-dimensional array (3x3 matrix) 
and calculate the sum of all elements. */
    
    int matrix[3][3], j, sum = 0;

    printf("\nEnter elements for a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j]; 
        }
    }

    printf("\nThe 3x3 matrix is:");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n ");
    }
    printf("\nSum of all elements in a matrix = %d", sum);
}

