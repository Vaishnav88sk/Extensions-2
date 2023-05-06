#include<stdio.h>

int main()
{
    int a,b,c;
    printf("swapping of two numbers:\n\n");
    printf("Enter your first number:");
    scanf("%d",&a);
    printf("Enter your second number:");
    scanf("%d",&b);
    printf("Before swapping:\n");
    printf("First number:%d\n",a);
    printf("Second number:%d\n\n",b);
    c=a;
    a=b;
    b=c;
    printf("After swapping:\n");
    printf("first number:%d\n",a);
    printf("Second number:%d\n",b);
return 0;
    
}