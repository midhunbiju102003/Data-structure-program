#include<stdio.h>
void main()
{
int a[10],i,n,in,pos;
printf("Enter the limit:");
scanf("%d",&n);
printf("Enter the numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the elements to be inserted:");
scanf("%d",&in);
printf("Enter the position:");
scanf("%d",&pos);
for(i=n;i>=pos;i--)
{
a[i]=a[i-1];
}
a[pos-1]=in;
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
