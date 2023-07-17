#include<stdio.h>
#include<conio.h>
main()
{
int n ,i=1,sum=0,x;
clrscr();
printf("upto elements");
scanf("%d",&n);
while(i<=n)
{
 printf("enter a num");
 scanf("%d",&x);
 sum=sum+x;
 i++;
}
printf("%d",sum);
}

