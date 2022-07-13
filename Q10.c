//Write a program to take a three digit number from the user and rotate its digits by one position towards the right.
#include<stdio.h>
int main()
{
int num,a,c,fdig,x,y,z;
printf("enter the number ");
scanf("%d",&num);
c=(int)log10(num);
fdig=num/pow(10,c);
x=fdig*pow(10,c);
y=num-x;
z=y*10+fdig;
printf("count=%d\nfirst digit=%d\nx=%d\ny=%d\nour result=%d ",c,fdig,x,y,z);
}
