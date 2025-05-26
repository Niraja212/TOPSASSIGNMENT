/*Write a C program that takes N numbers from the user and stores them in an array. The
program should then calculate and display the sum of all array elements.
? Challenge: Modify the program to also find the average of the numbers.
*/
#include<stdio.h>
int main() {
    int numbers[N],N,i,sum = 0;
    
    printf("Enter the numbers of element: ");
    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        printf("Enter number %d: ",i+1);
        scanf("%d",&numbers[i]);
        sum+=numbers[i];
    }
    float average=(float)sum/N;
    printf("Sum = %d\n",sum);
    printf("Average = %.2f\n",average);
}

