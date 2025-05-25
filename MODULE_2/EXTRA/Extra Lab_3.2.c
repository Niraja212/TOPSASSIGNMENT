/* WAP that takes an integer input from the user and prints its multiplication table using a for loop.
Challenge: Allow the user to input the range of the multiplication table.*/

#include<stdio.h>
main(){
	int i, num;
	printf("\n enter the num:");
	scanf("%d",&num);
	
	for(i=1;i<=10;i++){
	    printf("\n %d * %d = %d ",num, i, num*i);
    }
}
