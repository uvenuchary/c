#include<stdio.h>
#include<conio.h>
main()
{
int n,i=1,j,k=65;
clrscr();
printf("enter a num");
scanf("%d",&n);
while(i<=n)
{
 j=1;
 while(j<=i)
 {
  printf("%c",k);
  j++;
  k++;
  }
 printf("\n");
 i++;
 }
getch();
}