#include <stdio.h>
int main(void) {
	int a,b,i,num,sum,rem;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++){
		num=i;
    sum =0;
    while(num>0){
		rem = num % 10;
		sum += rem * rem * rem;
		num = num / 10;
		}
    if(sum==i){
 	  printf(" %d",i);
  	}
	  }
 return 0;
 }
