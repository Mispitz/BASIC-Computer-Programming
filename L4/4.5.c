#include <stdio.h>

int main() {
    int SIZE = 6 ;
    int data[ SIZE ] ;
    int total_sum = 0 ;
    int i ;

    for ( i = 0 ; i < SIZE ; i++ ) {
        printf( "Enter integer number %d: " , i + 1 ) ;
        scanf( "%d" , &data[ i ] ) ;
        total_sum += data[ i ] ;
    }// end for loop

    printf( "\n--- SUMMATION REPORT ---\n" ) ;
    printf( "Recorded Number: " ) ;

    for ( i = 0 ; i < SIZE ; i++ ) {
        printf( "%d " , data[ i ] ) ;
    }// end for loop

    printf( "\n" ) ;
    printf( "Total Sum of Number: %d\n" , total_sum ) ;

    return 0 ;
}// end main function