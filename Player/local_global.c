#include<stdio.h>
int global = 100;
void func1();
void main()
{
   int local = 10;      
   printf("Global variable is %d",global);
   printf("Local variable is %d",local);
   func1();
}
void func1()
{
   printf("Global inside func1 is %d",global);  
}
