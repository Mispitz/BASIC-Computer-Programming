#include <stdio.h>

struct SalesRecord {
    char name[ 50 ] ;
    float target ;
    float actual ;
} ;

int main() {
    int N ;
    int i ;
    float grandTotalCommission = 0.0 ;

    if ( scanf( "%d" , &N ) != 1 ) {
        return 1 ;
    }// end if

    struct SalesRecord records[ N ] ;

    for ( i = 0 ; i < N ; i++ ) {
        float baseCommission ;

        if ( scanf( "%f %f %s" , &records[ i ].target , &records[ i ].actual , records[ i ].name ) != 3 ) {
            return 1 ;
        }// end if

        baseCommission = records[ i ].actual * 0.10 ;

        if ( records[ i ].actual >= records[i].target * 1.20 ) {
            baseCommission += 200.0 ;
        }
        else if ( records[ i ].actual >= records[ i ].target ) {
            baseCommission += 50.0 ;
        }
        else if ( records[ i ].actual < records[ i ].target * 0.9 ) {
            baseCommission -= 100.0 ;
        }// end if else

        grandTotalCommission += baseCommission ;
    }// end for loop

    printf( "Grand Total Commission: %.2f\n" , grandTotalCommission ) ;
}// end main function