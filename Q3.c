// find first digit of a given three digit number
#include<stdio.h>
#include<stdio.h>
int main()
{
int n,x,y,c;
printf("enter the three digit number ");
scanf("%d",&x);
c=log10(x);
y=x/pow(10,c);// pow(base,exponent)
printf("%d",y);
}

/*#include <stdio.h>
#include <math.h>
int main()
{
    int num =789568, result;

    result = log10(num);
    printf("log10(%d) = %d", num, result);

    output will be=5
}
*/
