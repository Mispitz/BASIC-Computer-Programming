#include <stdio.h>

#define SIZE 5

int find_and_update(int *arr_ptr, int size, int search_value, int new_value);
void print_array(int array[], int size);

int main() {
    int numbers[ SIZE ] ;
    int search_val ;
    int new_val ;
    int status ;
    int i;

    printf( "Enter %d integer elements for the array:\n" , SIZE ) ;
    for ( i = 0 ; i < SIZE ; i++ ) {
        printf( "Element %d: " , i + 1 ) ;
        if ( scanf("%d", &numbers[i]) != 1 ) {
            return 1 ;
        }// end if
    }// end for loop


    printf( "\nEnter value to search (Search Value): " ) ;
    if ( scanf( "%d" , &search_val ) != 1 ) {
        return 1 ;
    }// end if

    printf( "Enter new value to replace it with (New Value): " ) ;
    if ( scanf( "%d" , &new_val ) != 1 ) {
        return 1 ;
    }// end if

    printf( "\n--- ARRAY UPDATE REPORT ---\n" ) ;
    printf( "Array BEFORE Update: " ) ;
    print_array( numbers , SIZE ) ;

    status = find_and_update( numbers , SIZE , search_val , new_val ) ;

    printf( "Array AFTER Update: " ) ;
    print_array( numbers , SIZE ) ;

    printf( "Status: " ) ;

    if ( status == 0 ) {
        printf( "Update FAILED(Value not found)." ) ;
    }
    else {
        printf( "Update SUCCESSFUL." ) ;
    }// end if


    return 0 ;
}// end main function

int find_and_update(int *arr_ptr, int size, int search_value, int new_value) {
    int i = 0 ;

    for( i = 0 ; i < size ; i++ ) {
        if ( *(arr_ptr + i) == search_value ) {
            *(arr_ptr + i) = new_value ;
            return 1 ;
        }// end if
    }// end for loop

    return 0 ;
}// end find_and_update function

void print_array( int array[] , int size ) {
    for ( int i = 0 ; i < size ; i++ ) {
        printf( "%d " , array[i] ) ;
    }// end for loop
    printf("\n") ;
}// end print_array function