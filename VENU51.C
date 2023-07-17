#include<stdio.h>
#include<conio.h>
main()
{
int a[10][10],b[10][10],c[10][10];
int m,n,p,q,i,j,k;
clrscr();
printf("enter the row and column size of A");
scanf("%d %d",&m,&n);
printf("nter the roe and column size of B");
scanf("%d %d",&p,&q);
if(n==p)
{
printf("\n enter the elements to A array");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
 scanf("%d",&a[i][j]);
printf("\n enter the elements to B array");
for(i=0;i<p;i++)
for(j=0;j<q;j++)
 scanf("%d",&b[i][j]);
for(i=0;i<m;i++)
for(j=0;j<q;j++)
{
c[i][j]=0;
for(k=0;k<n;k++)
{
 c[i][j]=c[i][j]+a[j][k]*b[k][i];
}
}
printf("\n result is:\n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
printf("\t %d",c[i][j]);
}
printf("\n");
}
}
else
printf("\n multiplicatio is not possible");
getch();
}