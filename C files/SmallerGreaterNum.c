#include<stdio.h>

int main()
{   
    int a,b,c;
    printf("Finding Greater and Smaller number among the given values\n\n");
    printf("Enter 1st number:");
    scanf("%d", &a);
    printf("Enter 2nd number:");
    scanf("%d", &b);
    printf("Enter 3rd number:");
    scanf("%d", &c);
    printf("The answer is:\n");
    if (a > b && a > c)
    printf("%d is greater number.\n\n", a);
    else if (b > c && b > a)
    printf("%d is greater number.\n\n", b);
    else if (c > a && c > b)
    printf("%d is greater number.\n\n", c);
    else
    printf("Values are not unique.\n");
    if(a<b && a<c)
    printf("%d is smaller number.",a);
    else if(b<a && b<c)
    printf("%d is smaller number.",b);
    else if(c<a && c<b)
    printf("%d is smaller number.",c);
    
    
    return 0;
} 