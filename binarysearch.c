#include<stdio.h>
void main()
{
int arr[10],left=0,num,right,middle,i,n;
printf("Enter the array limit:");
scanf("%d",&n);
printf("Enter elements in array:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the number to be search:");
scanf("%d",&num);
right=n-1;
while(left<=right)
{
middle=(left+right)/2;
if(arr[middle]==num)
{
printf("The element is found at position %d",middle);
break;
}
else if(arr[middle]>num)
{
right=middle-1;
}
else
{
left=middle+1;
}
if(left>right)
{
printf("Element not found in the list");
}
}
}

