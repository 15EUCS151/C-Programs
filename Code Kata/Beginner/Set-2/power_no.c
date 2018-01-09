#include<stdio.h>
int main(void)
{
    int base,exponent,result=1;
    scanf("%d %d",&base,&exponent);
    while(exponent!=0){
    result = result * base;
    exponent--;
    }
    printf("%d",result);
    return 0;
}
