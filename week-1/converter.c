#include<stdio.h>

/* we use #define to declare variables as "final" like in java */
#define LOW 0 
#define HIGH 300
#define STEP 20
#define fahr_to_cel(f) ((f-32)*5.0/9)
#define sqr(x) ((x) * (x)) /* is better than sqr(x) x*x */
/* preprocessor macros are NOT handled by the compiler like functions. macros will be replaced by their definition before 
the compiler  even looks at the code. the module that uses #define is called preprocessor
for example: square(3+5) is seen as --> 3+ 5 * 3 +5 OR 23 */ 
/* 5* 3 = 18, 18 + 6 = 23 */

/* a lightweight function is called a macro (like methods) */
/* used to enhance performace, instead of making an entire function, we use a macro to do simple calculations */
/* SYNTAX: #define name() example func   --> see  */


int sqr_function(int x) {
	return x * x; /* will give the correct output, unlike the macro function */
}

int main(void){

	for(int fahr = 0; fahr <= 300; fahr = fahr + 20)
	{
		printf("%d\t%d\n", fahr, (fahr - 32)*5/9);
	}
	
	
	printf("\nMore precise table:\nFahr\tCel.\n");
	for(int fahr = 0; fahr <= 300; fahr = fahr + 20)
	{
		printf("%d\t%.2f\n", fahr, (fahr - 32)*5.0/9);
	}
	
	
	printf("\nUsing constant!:\nFahr\tCel.\n");
	for(int fahr = LOW; fahr <= HIGH; fahr = fahr + STEP)
	{
		printf("%d\t%.2f\n", fahr, (fahr - 32)*5.0/9);
	}
	
	
	printf("\nUsing constant & macros!:\nFahr\tCel.\n");
	for(int fahr = LOW; fahr <= HIGH; fahr = fahr + STEP){
		printf("%d\t%.2f\n", fahr, fahr_to_cel(fahr));
	}
	
	printf("Square of 3 + 5 js %d or %d\n", sqr(3+5), sqr_function(3+5) );
	
	printf("difference between ++c or c++ incrementors: \n");
	int num = 10;
	printf("this number prints %d using num++ \n", num++); // prints 10 

	num = 10;
	printf("this number prints %d using ++n \n", ++num);

	return 0;
}