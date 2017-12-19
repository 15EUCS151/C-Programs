#include<stdio.h>
int count = 100; 
void func();      
void main()
{
   int count = 15;        
   printf("count value is %d",count);
   if(count>10)
   {
   int count = 20; 
   count = count + 1;
   printf("count value is:%d",count);
   }
   printf("count value is:%d",count);
   func();
}
void func()
{
   printf("count value is:%d",count);
}
