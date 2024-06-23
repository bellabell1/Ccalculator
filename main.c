#include <stdio.h>

int main(){

char choice;
double num1, num2, result;

printf("\nEnter an choice (+ - * /): ");
scanf("%c", &choice);

printf("Enter an choice 1: ");
scanf("%lf", &num1);

printf("Enter an choice 2: ");
scanf("%lf", &num2);

switch(choice){
    
   case '+':
   result = num1 + num2;
   printf("\nresult: %.2lf", result);
   break;
   case '-':
   result = num1 - num2;
   printf("\nresult: %.2lf", result);
   break;
   case '*':
   result = num1 * num2;
   printf("\nresult: %.2lf", result);
   break;
   case '/':
   result = num1 / num2;
   printf("\nresult: %.2lf", result);
   break;
   default:
   printf("%c Error! Invalid choice.", choice);
    break;
    
}

    return 0;
}