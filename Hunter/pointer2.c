#include <stdio.h>
int main ()
{
int  var = 20;  
int  *ip;    
ip = &var; 
printf("\nAddress of var variable: %x", &var);
printf("\nAddress stored in ip variable: %x", ip);
printf("\nValue of *ip variable: %d", *ip);
return 0;
}
