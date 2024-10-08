#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main(void) {
    long *buffer, *oldbuffer;
    size_t size;

    if ( (buffer= (long *) malloc ( 1000 * sizeof(long) )) == NULL )
        exit( 1 );

    size = _msize ( buffer );
    printf_s( "Size of block after malloc of 1000 longs: %u\n", size);

    oldbuffer = buffer;
    if ((buffer = realloc( buffer, size + (1000 * sizeof( long)) ))== NULL)
    {
        free(oldbuffer);
        exit (1);
    }
    size = _msize( buffer );
    printf_s( "Size of block after realloc of 1000 more longs: %u\n",
        size);
    
    free( buffer );
    exit( 0 );

    
    




}