#include<stdio.h>
void main()
{
int a[10],i,n,pos;
printf("Enter the limit:");
scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Gives array is:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("\nEnter the position to be deleted:");
scanf("%d",&pos);
for(i=pos-1;i<n;i++)
{
a[i]=a[i+1];
}
printf("\n Converted array:");
for(i=0;i<n-1;i++)
{
printf("%d",a[i]);
}
}
