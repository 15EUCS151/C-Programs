#include <stdio.h>
int main(void) {
	int i,temp,num,rev=0,rem;
	printf("\n Enter a number to find the palindrome or not:\n");
	scanf("%d",&num);
	temp = num;
	while(num!=0){
		rem = num % 10;
		rev = (rev * 10) + rem;
		num = num / 10;
	}
	if(temp == rev)
	printf("yes");
	else
	printf("no");
	return 0;
}
