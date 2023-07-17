#include<stdio.h>
#include<conio.h>
main()
{
int a,b,add(int,int);
clrscr();
printf("enter 2 no");
scanf("%d %d",&a,&b);
add(a,b);
}
add(int x,int y)
{
int z;
z=x+y;
printf("sum=%d",z);
}