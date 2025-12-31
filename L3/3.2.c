#include <stdio.h>

struct Student {
    char name[ 50 ] ;
    int studenttId ;
    float score ;
};

int main() {
    int N ;
    int i ;

    if ( scanf( "%d" , &N ) != 1 ) {
        return 1 ;
    }// end if

    struct Student students[ N ] ;

    for ( i = 0 ; i < N ; i++ ) {

        if ( scanf( "%d %f %s" , &students[ i ].studenttId , &students[ i ].score , students[ i ].name ) != 3 ) {
            return 0 ;
        }// end if

    }// end for loop

    for ( i = 0 ; i < N ; i++ ) {
        printf( "ID: %d, Name: %s, Score: %.2f\n" , students[ i ].studenttId , students[ i ].name , students[ i ].score ) ;
    }// end for loop
    
    return 0 ;
}// end main function