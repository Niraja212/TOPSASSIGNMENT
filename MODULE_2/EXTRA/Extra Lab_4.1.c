/*Write a C program that accepts 10 integers from the user and 
stores them in an array.The program should then find and print 
the maximum and minimum values in the array.*/ 

#include<stdio.h>
main(){
	int arr[10],i,j,min,max,temp;
	printf("\n Enter the 10 integers: ");
	for(i=0; i<10; i++){
	scanf("%d",&a[i]);
        }
	min=a[0];
	max=a[0];
	
	for(i=1; i<10; i++){
		if(a[i]<min){
		min=a[i];
		}
		if(a[i]>max){
		max=a[i];
		}
	}
	printf("Minimum element=%d \n",min);
	printf("Maximum element=%d \n",max);

/*Challenge: Extend the program to sort the array in ascending order.*/
	
	 for(i=0; i<10; i++) {
         for(j=i+1; j<10; j++) {
            if(a[i]>a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted array in ascending order: \n");
    for(i=0; i<10; i++) {
        printf("%d ", a[i]);
    }
}
