#include <cs50.h>
#include <stdio.h>
#include "bmp.h"

to do list:
open files
update header s info for outfile
read clues scanline pixel by pixel
change pixel s color
write verdict s scanline pixel by pixel

int main( int argc, char* argv[] )
{
   if( argc != 3 )
      {
      fprintf(stderr, "Usage: ./whodunit infile outfile\n");      
      return 1;
      }
   
   FILE in_file  = fopen("argv[1]", "r"); // read only 
   FILE out_file = fopen("argv[2]", "w"); // write only         
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
   fread
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
