#include<stdio.h>
#include<conio.h>
main()
{
int n,fact(int);
clrscr();
printf("enter a num");
scanf("%d",&n);
printf("%d",fact(n));
}
fact(int n)
 {
  int i=1;
  while(i<=n)
  {
   if(n%i==0)
   printf("\t%d",i);
   i++;
  }
  getch();
}
