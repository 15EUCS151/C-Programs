#include <stdio.h>
int main(void) {
	int temp,num,rem= 0,sum = 0,cube =0;
	printf("\n Enter a number to find armstrong no:\n");
	scanf("%d",&num);
	temp = num;
	while(num>0){
		rem = num % 10;
		cube = rem * rem * rem;
		sum = sum + cube;
		num = num / 10;
	}
	if(sum == temp)
	printf("yes");
	else
	printf("no");
	return 0;
}
