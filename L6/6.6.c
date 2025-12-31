#include <stdio.h>

#define SIZE 5

int calculate_net_balance(int *trans_array, int size, int *status_ptr);

int main() {
    int transactions[ SIZE ] ;
    int net_balance ;
    int finance_status ;
    int i ;

    printf( "Enter %d transactions (Income +, Expense -):\n" , SIZE ) ;
    for ( i = 0 ; i < SIZE ; i++ ) {
        printf( "Transaction %d: " , i + 1 ) ;
        if ( scanf( "%d" , &transactions[i]) != 1 ) {
            return 1 ;
        }// end if
    }// end for loop

    net_balance = calculate_net_balance( transactions , SIZE , &finance_status ) ;

    printf( "\n--- PERSONAL FINANCE REPORT ---\n" ) ;
    printf( "Transactions Recorded: " ) ;

    for ( i = 0 ; i < SIZE ; i++ ) {
        printf( "%d " , transactions[i] ) ;
    }// end for loop

    printf( "\n" ) ;
    printf( "Net Balance: %d\n" , net_balance ) ;
    printf( "Status: " ) ;

    if ( finance_status == 1 ) {
        printf( "PROFIT" ) ;
    }
    else {
        printf( "LOSS" ) ;
    }// end if else

    return 0 ;
}// end main function

int calculate_net_balance( int *trans_array , int size , int *status_ptr ) {
    int net = 0 ;
    int i ;

    for ( i = 0 ; i < size ; i++ ) {
        net += *( trans_array + i ) ;
    }// end for loop

    if ( net < 0 ) {
        *status_ptr = 0 ;
    }
    else {
        *status_ptr = 1 ;
    }// end if else

    return net ;
}// end calculate_net_balance function