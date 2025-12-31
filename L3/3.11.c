#include <stdio.h>

int main() {
    int choice ;
    float totalCost = 0.0 ;
    float paidAmount ;
    float change ;

    do {
        printf( "\n--- Vending Machine ---\n" ) ;
        printf( "1. Coke (15.00)\n" ) ;
        printf( "2. Water (10.00)\n" ) ;
        printf( "3. Snack (25.00)\n" ) ;
        printf( "\4. Exit and Pay\n" ) ;
        printf( "Current Total: %.2f\n" , totalCost ) ;

        printf( "Select item (1-4): " ) ;
        if ( scanf( "%d" , &choice ) != 1 ) {
            break ;
        }// end if

        switch ( choice ) {
            case 1: {
                totalCost += 15 ;
                break ;
            } ;
            case 2: {
                totalCost += 10 ;
                break ;
            } ;
            case 3: {
                totalCost += 25 ;
                break ;
            } ;
        }// end switch case

    } while ( choice != 4 ) ; // end do while loop

    if ( totalCost > 0.0 ) {
        printf( "Total due: %.2f\n" , totalCost ) ;
        printf( "Enter paid amount: " ) ;

        if ( scanf( "%f" , &paidAmount ) != 1 ) {
            return 1; 
        }// end if

        if ( paidAmount >= totalCost ) {
            change = paidAmount - totalCost ;
            printf( "Purchase successful. Change: %.2f\n" , change ) ;
        }
        else {
            printf( "Insufficient payment. Purchase camcelled.\n" ) ;
        }// end if else
    }
    else {
        printf( "No items purchased. Goodbye!\n" ) ;
    }// end if else

    return 0 ;

}// end main function