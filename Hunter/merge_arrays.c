#include <stdio.h>
void merge(int a[],int m,int b[],int n,int c[]);
int main()
{
	int a[10],b[10],c[20],m,n,i;
	printf("\n Enter the size of array1:");
	scanf("%d",&m);
	printf("\n Enter the array1 elements:");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter the size of array2:");
	scanf("%d",&n);
	printf("\n Enter the array2 elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	merge(a,m,b,n,c);
	printf("\n The merged array is:");
	for(i=0;i<m+n;i++)
	{
		printf("\n %d",c[i]);
	}
	return 0;
}
void merge(int a[],int m,int b[],int n,int c[])
{
	int i,j=0,k=0;
	for(i=0;i<m+n;)
	{
		if(j<m && k<n)
		{
			if(a[j]<b[k])
			{
				c[i]=a[j];
				j++;
			}
			else
			{
				c[i]=b[k];
				k++;
			}
			i++;
		}
		else if(j==m)
		{
			for(;i<m+n;)
			{
				c[i]=b[k];
				k++;
				i++;
			}
			
		}
		else
		{
			for(;i<m+n;)
			{
				c[i]=a[j];
				j++;
				i++;
			}
		}
	}
}
