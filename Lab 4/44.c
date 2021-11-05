#include <stdio.h>
#include <conio.h>
int ncr( int , int);
	long npr( int , int);
	long double fac( int);
void main() {
	int n , r,x,y;

	printf(" Enter value of n & r \n");
	scanf("%d %d",&n , &r);
     fac(n );
   x=  ncr( n, r);
	y=  npr( n , r);
	
	if( n>= r) {
		printf( " %dC%d is %d\n", n,r,x);
		printf(" %dP%d  is %ld", n,r,y);
	} else {
		printf("WRONG INPUT?? enter the correct input");
	}
}
long double fac( int p) {
	long double f = 1;
	int i;
	for ( i = 1; i<= p; i++)
	  f = f * i;
	return( f);
}
int ncr ( int n, int r) {
	return( fac( n) / (fac( r) * fac(n- r) ) ) ;
}
long npr( int n , int r) {
	return( fac( n) / fac( n- r));
}