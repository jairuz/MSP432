/****************************************************************************
Example code that copies a string (from an array of string) to the buffer.

Reference: 
https://www.tutorialspoint.com/c_standard_library/c_function_strcpy.htm
https://www.studytonight.com/c/pointers-with-array.php
****************************************************************************/
#include <stdio.h>
#include <string.h>

char *message[] = {
                    "0000",             //message[0]
                    "0101",
                    "1010",
                    "1111",
                 };

int main () 
{
   char src[40];
   char buffer[100];
  
   //memset(buffer, '\0', sizeof(buffer));
   strcpy(src, message[0]);              //0000
   strcpy(buffer, src);

   printf("Final copied string : %s\n", buffer);
   
   return(0);
}

