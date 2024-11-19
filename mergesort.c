#include<stdio.h>
void main()

{
	int a[10],b[10],c[10],n,i,size,k,j,m;
	printf("Enter the size of Array1");
	scanf("%d", &n);
	printf("Enter the Elements");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the size of Array2");
	scanf("%d", &m);
	printf("Enter the Elements");
	for(i=0;i<m;i++)
	{
		scanf("%d", &b[i]);
	}
	size=m+n;
	for(i=0;i<size;i++)
	{
		c[i]=a[i];
	}
	for(i=0;i<size;i++)
	{
		c[i+n]=b[i];
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(c[i]>c[j])
			{
				k=c[i];
				c[i]=c[j];
				c[j]=k;
			}	
		}
	}
	printf("The sorted array is\n");
	{
		for(i=0;i<size;i++)
		{
			printf("%d\n", c[i]);
		}
	}
}

