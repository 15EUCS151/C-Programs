#include<stdio.h>
int main()
{
  struct emp
  {
   char *n;
   int age;
  };
 struct emp e1 = {"Dravid", 23};
 struct emp e2 = e1;
 strupr(e2.n);
 printf("%s", e1.n);
 return 0;
}
 
