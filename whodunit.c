#include <cs50.h>
#include <stdio.h>

int main( int argc, char *argv[] )
{

   if( argc == 2 ) {
      printf("The argument supplied is %s\n", argv[1]);
      fprintf( stderr, "my %s has %d chars\n", "string format", 30);
   }
   else if( argc > 2 ) {
      printf("Too many arguments supplied.\n");
   }
   else {
      printf("One argument expected.\n");
   }
}
