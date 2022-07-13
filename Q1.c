// print size of an int, a float, a char and a double type variable
#include<stdio.h>
int main()
{
int x,a,b,c,d;
float y;
char z;
double u;
a=sizeof(x);
b=sizeof(y);
c=sizeof(z);
d=sizeof(u);
printf("sizeof int variable=%d\n sizeof float variable=%d\n sizeof char variable=%d\n sizeof double variable=%d ",a,b,c,d);

}
