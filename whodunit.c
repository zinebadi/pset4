#include <cs50.h>
#include <stdio.h>

int main( int argc, char *argv[] )
{
   if( argc == 2 ) 
      {
      printf("The argument supplied is %s\n", argv[1]);
       }
   else 
   {
      fprintf( stderr, "the correct usage is by giving two arguments \n");
      return 1;
   }
   
   FILE *in_file  = fopen("name_of_file", "r"); // read only 
   FILE *out_file = fopen("name_of_file", "w"); // write only         
   // test for files not existing. 
   if (in_file == NULL ) 
      {   
       fprintf(stderr, "Error! Could not open the file to read \n"); 
       return 2;
      }
   
   if (out_file == NULL) 
      {   
       fprintf(stderr, "Error! Could not open the file to write \n"); 
       return 3;
      }
return 0;
}        
           





          // write to file vs write to screen 
          fprintf(file, "this is a test %d\n", integer); // write to file 
          fprintf(stdout, "this is a test %d\n", integer); // write to screen  
          printf("this is a test %d\n", integer); // write to screen  
 
          // read from file/keyboard. remember the ampersands!  
          fscanf(file, "%d %d", &int_var_1, &int_var_2);  
          fscanf(stdin, "%d %d", &int_var_1, &int_var_2);  
          scanf("%d %d", &int_var_1, &int_var_2); 
