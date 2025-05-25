/*Write a C program that calculates the factorial of a number using a function. 
Include function declaration, definition, and call.*/

#include<stdio.h>

	factorial(int n);//Function declare
	
	main(){
	int num, result;
    printf("\n enter the number: ");
    scanf("%d", &num);
    result=factorial(num);
    if (num < 0)
        printf("not defined.\n");
    else
        printf("Factorial of %d is %d\n",num,result);

    return 0;
}
    //Function Definition 
    int factorial(int n) {
    int fact=1,i;
    for(i=1;i<=n;i++) {
        fact*=i;
    }
    return fact;//function call
}
	
