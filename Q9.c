//Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
#include<stdio.h>
int main()
{
float usd=1,inr=76.23,inr_amn,con_usd;
printf("enter the amount in inr ");
scanf("%f",&inr_amn);
con_usd=inr_amn/76.23;
printf("INR in terms of USD=%f",con_usd);

}
