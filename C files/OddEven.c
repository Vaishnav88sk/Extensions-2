#include<stdio.h>
int main()
{   
    int a;
    printf("To Check the given number is even or odd\n\n");
    printf("Enter a number :");
    scanf("%d",&a);
    if(a%2==1)
    printf("%d is odd",a);
    else
    printf("%d is even",a);
    return 0;
}