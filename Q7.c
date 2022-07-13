//make the last digit of a number stored in a variable as zero
#include<stdio.h>
int main()
{
int a,b,r;
printf("enter the number ");
scanf("%d",&a);
r=a%10;
b=a-r;
printf("last digit or reminder=%d\nnew value=%d",r,b);
}
