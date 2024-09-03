#include<stdio.h>

/* we use #define to declare variables as "final" like in java */
#define LOW 0 
#define HIGH 300
#define STEP 20
#define fahr_to_cel(f) ((f-32)*5.0/9)

/* a lightweight function is called a macro (like methods) which are lightweight functions  */
/* used to enhance performace, instead of making an entire function, we use a macro to do simple calculations */
/* SYNTAX: #define name() example func   --> #define sqrx(x) x*x */
int main(void){

	for(int fahr = 0; fahr <= 300; fahr = fahr + 20)
	{
		printf("%d\t%d\n", fahr, (fahr - 32)*5/9);
	}
	
	
	printf("More precise table:\nFahr\tCel.\n");
	for(int fahr = 0; fahr <= 300; fahr = fahr + 20)
	{
		printf("%d\t%.2f\n", fahr, (fahr - 32)*5.0/9);
	}
	
	
	printf("Using constant!:\nFahr\tCel.\n");
	for(int fahr = LOW; fahr <= HIGH; fahr = fahr + STEP)
	{
		printf("%d\t%.2f\n", fahr, (fahr - 32)*5.0/9);
	}
	
	
	printf("Using constant & macros!:\nFahr\tCel.\n");
	for(int fahr = LOW; fahr <= HIGH; fahr = fahr + STEP){
		printf("%d\t%.2f\n", fahr, fahr_to_cel(fahr));
	}
	
	
	return 0;
}