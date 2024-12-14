#include<stdio.h>
int main()
{
    int a,num;
    printf("Enter the number");
    scanf("%d",&num);
    a=num%2;
    if(a==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}