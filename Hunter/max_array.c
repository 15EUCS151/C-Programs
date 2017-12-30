#include<stdio.h>
int max_array(int a[],int n);
int main()
{ 
	int i,n,a[20],max;
	printf("\n Enter the no. of elements in array:");
	scanf("%d",&n);
	printf("\n The array elements are:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}	
	max = max_array(a,n);
	printf("\n The largest element in the array is:%d",max);
	return 0;
}
int max_array(int a[],int n)
{
	int max=a[0],i;
	for(i=1;i<n;i++)
	{
	if(max<a[i])
	   max=a[i];
	}
	return max;
}
