#include<stdio.h>
#include<conio.h>
main()
{
int i=10,j,f;
clrscr();
while(i<=100)
{
 j=1,f=0;
 while(j<=i)
 {
  if(i%j==0)
   f++;
  j++;
 }
if(f==2)
 printf("\t%d",i);
i++;

}
getch();
}