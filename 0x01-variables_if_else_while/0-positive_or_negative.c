#include<stdio.h>
#include<time.h>
/**
 *
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n > 0 ) {
	/*print that n is positive*/
		printf("n is positive\n" )
	}else if ( n == 0 ) {
		printf("n is zero\n" )
	}else ( n < 0 ) {
		printf("n is positive\n"
	}
		return(0);
}
