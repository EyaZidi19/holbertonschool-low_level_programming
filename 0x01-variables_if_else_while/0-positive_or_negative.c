#include <stdlib.h>
#include <time.h>
/* author Eya zidi */
/* betty style  */
int main(void)
{int n;
n = rand() - RAND_MAX / 2;
if ( n > 0  ) 
{printf ("%d is positive\n" );}
else if (n<0 ) {            
printf( "%d is negative\n");}
else {printf( "%d is zero\n" )}
srand(n(0));
return (0);}
