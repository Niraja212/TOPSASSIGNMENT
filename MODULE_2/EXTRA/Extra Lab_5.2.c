/*Write a C program that accepts two 2x2 matrices from the user and adds them. Display the
resultant matrix.
Extend the program to work with 3x3 matrices and matrix multiplication.
*/

#include<stdio.h>
main(){
	int arr1[2][2],arr2[2][2],c[2][2],i,j,sum[2][2];

    printf("Enter the elements of first 2*2 matrix:\n");
    for(i=0; i<2; i++) {
    for(j=0; j<2; j++) {
        printf("arr1[%d][%d]: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter elements of second 2*2 matrix:\n");
    for(i=0; i<2; i++) {
    for(j=0; j<2; j++) {
        printf("arr2[%d][%d]: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0; i<2; i++){
    for(j=0; j<2; j++){
    	sum[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
		printf("\nMatrix Addition:\n");
    for(i=0; i<2; i++) {
    for(j=0; j<2; j++) {
        printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }



//3*3 matrix

#include<stdio.h>
{
	int arr1[3][3],arr2[3][3],c[3][3],sum[3][3];
	int i,j,k;

    printf("Enter elements of first 3*3 matrix:\n");
    for(i=0; i<3; i++) {
    for(j=0; j<3; j++) {
        printf("arr1[%d][%d]: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter elements of second 3*3 matrix:\n");
    for(i=0; i<3; i++) {
    for(j=0; j<3; j++) {
        printf("arr2[%d][%d]: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0; i<3; i++){
    for(j=0; j<3; j++){
    	sum[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
        for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            c[i][j] = 0;
            for(k=0; k<3; k++) {
                c[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    printf("\nMatrix Addition:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    printf("\nProduct Matrice:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d \t",c[i][j]);
        }
        printf("\n");
        }
    }
}

