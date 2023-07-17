#include<stdio.h>
#include<conio.h>
main()
{
int a[10],i=0,j,r,n;
clrscr();
printf("enter a num");
scanf("%d",&n);
while(n!=0)
{
 r=n%2;
 n=n/2;
 a[i]=r;
 i++;
}
for(j=i-1;j>=0;j--)
printf("\t%d",a[i]);
getch();
}