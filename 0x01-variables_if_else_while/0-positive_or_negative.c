#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- Enrty point
 *
 * Return: Always 0 (success)
 * int main(void)
 {
      int n;

      srand(time(0));
      n = rand() - RAND_MAX / 2;
      /* your code goes there */
if ( n > 0 )
	prinf("%d is positive\n", n);
else if ( n == 0 )
       prinf("%d is zero\n", n);
else  
      prinf("%d is negative\n", n);
return (0);
