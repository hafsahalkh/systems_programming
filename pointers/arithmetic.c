#include<stdio.h>
#define NO_ERROR 0
#define DIV_BY_ZERO_ERROR 1
#define SUM_OVERFLOW 2
#define DIFF_OVERFLOW 3
#define PROD_OVERFLOW 4

int arithmetic(int a, int b, int* sum_p, int* diff_p, int* prod_p, int* quot_p){
//return value is either 0 ---> NO_ERROR
//return value is either 1 ---> DIV_BY_ZERO_ERROR
//return value is either 2 ---> SUM_OVERFLOW
//return value is either 3 ---> DIFF_OVERFLOW
//return value is either 4 ---> PROD_OVERFLOW
//if(a > 0 && b > 0 && a+b < 0 || a < 0 && b < 0 && a+b > 0)

if( (a^b) >= 0 && (a ^ (a+b)) < 0)
return SUM_OVERFLOW;
*sum_p = a + b;
if( (a^b) < 0 && (a ^ (a-b)) < 0)
return DIFF_OVERFLOW;
*diff_p = a - b;
*prod_p = a * b;
if(b == 0)
return DIV_BY_ZERO_ERROR;
*quot_p = a / b;
return NO_ERROR;
}
int main(){
    int a, b;
    //1. program receives two integers A & B from stdin
    scanf("%d %d", &a, &b);
    //2. program calculates A+B, A-B, A/B, and A*B (in a separate function)
    /*int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    int quot = a / b;*/
    int sum, diff, prod, quot;
    int result = arithmetic(a, b, &sum, &diff, &prod, &quot);
    //3. program prints out the result OR prints an error message if the result
    //cannot be stored in an integer.
    switch(result){
    case SUM_OVERFLOW:
    printf("Error: sum overflow!\n");
    break;
    case DIFF_OVERFLOW:
    printf("Error: difference overflow!\n");
    break;
    case PROD_OVERFLOW:
    printf("Error: product overflow!\n");
    break;
    case DIV_BY_ZERO_ERROR:
    printf("Error: division by zero!\n");
    break;
    case NO_ERROR:
    default:
    printf("sum = %d. \ndiff = %d. \nprod = %d. \nquot = %d.\n",
    sum, diff, prod, quot);
}
return result;
}