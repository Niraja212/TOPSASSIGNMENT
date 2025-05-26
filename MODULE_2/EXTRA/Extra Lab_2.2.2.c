#include <stdio.h>
#include<stdio.h>
main() {
    int a, b, c;
    int maxCode, minCode;

    printf("\nEnter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

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

