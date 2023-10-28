#include <stdio.h>
#include <math.h>

#define abs(x)	( ( x ) < 0 ? -(x) : (x) )

	void itoa( int n, char s[] );

		int main()
		{
			int i, sign, n;

			char s[] = { 1,2,3,4,5,6,7,8,9,10 };

			for ( i = 0; i < 1000000; i++ )
			{
				itoa( 1,s );

				printf( "%d %d %d %d\t", i, sign, n, s  );
			}

		}

		void itoa( int n, char s[] )
		{
			int i, sign;

			sign = n;
			i = 0;

				do {
					s[i++] = abs( n % 10 ) + '0';
				} while ( ( n /= 10 ) != 0 );

				if ( sign < 0 )
					s[i++] = '-';
				s[i] = '\0';

		}
