#include<stdio.h>
void main()
{
int i,a[10],n,s;
printf("Enter the size of array: ");
scanf("%d",&n);
printf("Enter the elements in the array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the number we want:");
scanf("%d",&s);
for(i=0;i<n;i++)
{
if(a[i]==s)
{
printf("%d  number location in%d",s,i);
break;
}
if(i==n)
{
printf("%d is not prsent \n",s);
}
}
}

