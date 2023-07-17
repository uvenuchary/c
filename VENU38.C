#include<stdio.h>
#include<conio.h>
main()
{
int i,j;
clrscr();
for(i=1,j=2;i<=6;j+=2,i+=2)
printf("%d \t %d\n",i,j);
getch();
}