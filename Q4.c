/*middle digit number
If N = 12345
len = (int)log10(12345) + 1 = 5
Therefore,
First half of N = N/105/2 = N/102 = 123
Therefore middle digit of N = last digit of First half of N = (First half of N) % 10 = 123 % 10 = 3


#include<stdio.h>
#include<math.h>
int main()
{
    int c,x,y;
    scanf(" %d %d",&x,&y);
    c=pow(x,y);
    printf("%d",c);
}
*/
#include<stdio.h>
#include<math.h>
int main()
{
int n,len,fhn,md;
scanf("%d",&n);
len=(int)log10(n)+1;
fhn=n/pow(10,len/2);
md=fhn%10;
printf("len=%d \n fhn=%d  \n middle digit=%d",len,fhn,md);
}
