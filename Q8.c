// input a number from the user and also input a digit. Append a digit in the number and print the resulting number.
// (Example - number=234 and digit=9 then the resulting number is 2349)
#include<stdio.h>
int main()
{
int num,dig,resnum;
printf("enter the number and digit ");
scanf("%d %d",&num,&dig);
resnum=num*10+dig;
printf("resulting number=%d",resnum);
}
