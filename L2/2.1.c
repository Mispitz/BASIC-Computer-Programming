#include <stdio.h>

int main() {
    int N ;
    int i ;

    if ( scanf( "%d" , &N ) != 1 ) {
        return 1 ;
    }// end if

    if ( N <= 0 ) {
        printf( "Error" ) ;
        return 1 ;
    }// end if

    for( i = 0 ; i < N ; i++ ) {
        printf( "Hello Loop!\n" ) ;
    }// end for loop

    return 0 ;
}// end main function