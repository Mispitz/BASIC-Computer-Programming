#include <stdio.h>

int main() {
  int num1, num2, operationCode, result;

  // Get num1, num2, operationCode and input varidation
  if (scanf("%d %d %d" , &num1, &num2, &operationCode) != 3) {
    printf("Error");
    return 1;
  }//end if

  // Calculating
  switch(operationCode) {
    case 1 :
      result = num1 + num2;
      break;
    case 2 : 
      result = num1 - num2;
      break;
    case 3 : 
      result = num1 * num2;
      break;
    case 4 : 
      result = num1 / num2;
      break;
    default :
      printf("Invalid Operation");
      return 0;
  }//end switch case

  // Show result value
  printf("%d", result);

  return 0;
}//end main function