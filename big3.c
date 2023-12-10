#include <stdio.h>
 
void greatest()
{
    int A, B, C;
 
    printf("Enter the numbers A, B and C: ");
    scanf("%d %d %d", &A, &B, &C);
 
    // finding max using compound expressions
    if (A >= B && A >= C)
        printf("%d is the largest number.\n", A);
 
    else if (B >= A && B >= C)
        printf("%d is the largest number.\n", B);
 
    else
        printf("%d is the largest number.\n", C);
 
   // return 0;
}
