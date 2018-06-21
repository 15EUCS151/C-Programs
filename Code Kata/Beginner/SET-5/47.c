#include <stdio.h>

int main(void) {
	int max,min,a[10],n,i;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	min  = a[0];
	for(i=0;i<n;i++){
	if(min>a[i])
	  min = a[i];
	else 
	  max = a[i];
	}
	printf("%d %d",min,max);
	return 0;
}
