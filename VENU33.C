#include<stdio.h>
#include<conio.h>                                                          )
main()
{
int n,i=1,x,max,min;
clrscr();
printf("upto series");
scanf("%d",&n);
while(i<=n)
{
 printf("enter a num");
 scanf("%d",&x);
 i++;
}
if(i==1)
 max=min=x;
if(x<min)
 min=x;
if(x>max)
 max=x;
printf("max value is %d",max);
printf("min value is %d",min);
getch();
}

