#include <stdio.h>
#if !defined (MESSAGE)  
#define MESSAGE "You wish!"
#endif
int main(void){   
  printf("Here is the message: %s", MESSAGE);   
  return 0;
}
