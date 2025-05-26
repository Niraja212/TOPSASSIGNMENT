/* Write a C program that takes three numbers from the user and determines: 1) The largest number. 2) The smallest number.
Solve the problem using both if-else and switch-case statements. */

#include<stdio.h>

main(){
	
    int a, b, c, min, max;
    
    // Input three numbers
    printf("Enter three integers:\n");
    scanf("%d %d %d", &a, &b, &c);

    // ----------- Using if-else -----------

    //largest
    if (a >= b && a >= c)
        max = a;
    else if (b >= a && b >= c)
        max = b;
    else
        max = c;

    //Smallest
    if (a <= b && a <= c){
    	min = a;
	}    
    else if (b <= a && b <= c){
    	min = b;
	}     
    else{
    	min = c;
	}
	
    printf("Largest number = %d\n", max);
    printf("Smallest number = %d\n", min);	
}

