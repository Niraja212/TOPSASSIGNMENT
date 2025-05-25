#include <stdio.h>
#include<stdio.h>
main() {
    int a, b, c;
    int maxCode, minCode;

    printf("\nEnter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    //For largest
    if (a >= b && a >= c)
        maxCode = 1;
    else if (b >= a && b >= c)
        maxCode = 2;
    else
        maxCode = 3;

    //For Smallest
    if (a <= b && a <= c)
        minCode = 1;
    else if (b <= a && b <= c)
        minCode = 2;
    else
        minCode = 3;

    //for largest
    switch (maxCode) {
        case 1:
            printf("\nLargest number = %d", a);
            break;
        case 2:
            printf("\nLargest number = %d", b);
            break;
        case 3:
            printf("\nLargest number = %d", c);
            break;
    }

    //for smallest
    switch (minCode) {
        case 1:
            printf("\nSmallest number = %d", a);
            break;
        case 2:
            printf("\nSmallest number = %d", b);
            break;
        case 3:
            printf("\nSmallest number = %d", c);
            break;
    }

}

