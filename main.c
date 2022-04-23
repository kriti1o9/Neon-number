/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{

    int n, sqr, rem, sum=0;

    printf("Enter Number: ");
    scanf("%d",&n);

    sqr = n*n; //we can also use pow()

    while(sqr!=0)
    {
        rem = sqr%10;
        sum += rem; //sum = sum + rem
        sqr /= 10;  //sqr = sqr / 10
    }

    if(sum==n)
        printf("%d is a neon number.\n",n);
    else
        printf("%d is NOT a neon number.\n",n);

    return 0;
}