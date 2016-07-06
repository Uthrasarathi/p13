#include<stdio.h>
#include<stdio.h>
void main()
{
int a,b,c,n,i;
printf("Enter the number\n");
scanf("%d",&n);
do
{
a=0;
while(n>0)
{
b=n%10;
n=n/10;
a=a+(b*b);
}
n=a;
}
while(!(n>=0 && n<=9));
if(n==1)
printf("happy number\n");
else
printf("not a happy number\n");
getch();
}
