#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
bool songuyento(int n)
{
	//int i=2; 
	if (n==1)
	return false; 
	for (int i=2;i<=n;i++)
	{
		if ((n%i)==0)
		return false;
		break; 
	 } 
	
	return true; 
 } 
void insonguyento(int *a, int *b)
{
   int i=*a;
   //printf("%d", i);
   for ( i=*a; i<=*b;i++)
   {
      if (songuyento(i)==true)
      printf("%d \t",i);
   }
   printf("\n");
}