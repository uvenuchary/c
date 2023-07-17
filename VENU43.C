#include<stdio.h>
#include<conio.h>
main()
{
int a[5],b[5],c[5],i;
clrscr();
printf("enter the elements to an array");
for(i=0;i<5;i++)
 scanf("%d",&a[i]);
printf("enter the elements to an array");
for(i=0;i<5;i++)
 scanf("%d",&b[i]);
for(i=0;i<5;i++)
 c[i]=a[i]+b[i];
printf( "result is");
for(i=0;i<5;i++)
 printf("\nc[%d]=%d",i,c[i]);
getch();
}