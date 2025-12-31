#include <stdio.h>

struct Transaction {
    char description[ 50 ] ;
    float amount ;
} ;

int main() {
    int N ;
    int i ;
    float totalIncome = 0.0 ;
    float totalExpense = 0.0 ;
    float netBalance = 0.0 ;

    if ( scanf( "%d" , &N ) != 1 ) {
        return 1 ;
    }// end if

    struct Transaction transactions[ N ] ;

    for ( i = 0 ; i < N ; i++ ) {

        if ( scanf( "%f %s" , &transactions[ i ].amount , &transactions[ i ].description ) != 2 ) {
            return 1 ;
        }// end if

        if ( transactions[i].amount >= 0.0 ) {
            totalIncome += transactions[ i ].amount ;
        }
        else {
            totalExpense -= transactions[ i ].amount ;
        }// end if else
    }// end for loop

    netBalance = totalIncome - totalExpense ;

    printf( "Total Income: %.2f\n" , totalIncome ) ;
    printf( "Total Expense: %.2f\n" , totalExpense ) ;
    printf( "Net Balance: %.2f\n" , netBalance ) ;
}// end main function