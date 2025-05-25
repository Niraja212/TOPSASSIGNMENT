/*Write a C program to print numbers from 1 to 10 using all three types of loops (while, for, do-while).*/

#include<stdio.h>
main(){
	int i=1;
	//for loop
	for(i=1;i<=10;i++){
		printf("\n %d",i);
		break;
	}
	
	//while loop
	while(i<=10){
		printf("\n %d",i);
		i++;	
	}
	printf("\n loop end");
	// do-while loop
	do{
		printf("\n i=%d",i);
		i++;
	}
   while(i<=10);	
}
	
