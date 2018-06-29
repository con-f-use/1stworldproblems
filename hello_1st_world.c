/* Prints part of a Lil Jon song text. */

#include <stdlib.h>
#include <stdio.h>

int main( int argc, char * argv[] ) {
	unsigned liljon;


	printf(
		"Fire up the loud, "
		"another round of shots\n\n"
	);

	for( liljon=0; liljon<10; liljon++ )
		printf("Turn down for what?\n");

	for( liljon=1; (long)liljon<(long)argc; liljon++ )
		printf("%s\n", argv[liljon]);

	return 0;
}
