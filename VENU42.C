#include<stdio.h>
#include<conio.h>
main()
{
int a[5],i,max,maxpos,min,minpos;
clrscr();
printf("enter the elements to an array");
for(i=0;i<5;i++)
 scanf("%d",&a[i]);
for(i=0;i<5;i++)
 printf("%d",a[i]);
max=min=a[0];
maxpos=minpos=0;
for(i=1;i<5;i++)
{
 if(a[i]>max)
 {
  max=a[i];
  maxpos=i;
 }

 if(a[i]<min)
 {
 min=a[i];
 minpos=i;
 }}
printf("max values ==%d\t max pos=%d",max,maxpos);
printf("min values==%d\t min pos=%d",min,minpos);
getch();
}