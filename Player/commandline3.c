#include <stdio.h>
int main( int argc, char *argv[] )
{
printf("Program name %s", argv[0]);
if( argc == 3 ) 
{
printf("The argument supplied is %s %s", argv[1],argv[2]);
}
else if( argc > 3)
{
printf("Too many arguments supplied.");
}
else
{
printf("One argument expected.");
}
}

