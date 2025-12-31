#include <stdio.h>

struct Student {
    char name[ 50 ] ;
    int studentId ;
    float score ;
};

int main() {
    int N ;
    int i ;
    int passCount = 0 ;
    int failCount = 0 ;

    if ( scanf( "%d" , &N ) != 1 ) {
        return 1 ;
    }// end if

    struct Student students[ N ] ;

    for ( i = 0 ; i < N ; i++ ) {

        if ( scanf( "%d %f %s" , &students[ i ].studentId , &students[ i ].score , students[ i ].name ) != 3 ) {
            return 0 ;
        }// end if

        if ( students[ i ].score < 0 ) {
            return 0 ;
        }// end if

    }// end for loop

    for ( i = 0 ; i < N ; i++ ) {
        if ( students[i].score >= 60 ) {
            passCount++ ;
        }
        else {
            failCount++ ;
        }// end if else
    }// end for loop

    printf( "Pass Count: %d\nFail Count: %d" , passCount , failCount ) ;
    
    return 0 ;
}// end main function