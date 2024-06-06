#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "myfile.h"
int main(int argc, char *argv[]) {
   // printf() displays the string inside quotation
   //printf("num: %d \n ",argc);
   int num= atoi(argv[1]) ;
   int num2= atoi(argv[2]); 
   //printf("%d %d \n ", num, num2 );
   
   insonguyento(&num, &num2);


   return 0;
}
