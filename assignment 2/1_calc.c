// Write a C program to add, subtract, multiply, and divide two integers using a user-defined type function with a return type.
#include <stdio.h>
#include "calc_helper.h"
int main(){
    int num1,num2,total=0,input;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter a num to perform - add = 1, sub = 2, mul = 3, div = 4 : ");
    scanf("%d", &input);
    
    if(input == 1){
        int output = addition(num1, num2);
        printf("ans = %d", output);
    }
    else if(input == 2){
        int output = subtraction(num1, num2);
        printf("ans = %d", output);
    }
    else if(input == 3){
        int output = multiplication(num1, num2);
        printf("ans = %d", output);
    }
    else if(input == 4){
        int output = division(num1, num2);
        printf("ans = %d", output);
    }
    else{
        printf("Entered wrong input..");
    }

}