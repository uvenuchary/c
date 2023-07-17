#include<stdio.h>
#include<conio.h>
main()
{
int n,rev(int);
clrscr();
printf("enter a num");
scanf("%d",&n);
if(n==rev(n))
printf("palindrome");
else
printf("not");
}
rev(int n)
{
int r,sum=0;
while(n!=0)
{
 r=n%10;
 n=n/10;
 sum=sum*10+r;
}
return(sum);
}