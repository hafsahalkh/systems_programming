#include <stdio.h>

#include<stdio.h>

// -1 is all one's in signed ints 

int main(){
int number = 10;                        //is stored in 4 bytes, holds values from -2,147,483,648 to 2,147,483,647
   unsigned positive_number = 10;       //is stored in 4 bytes, holds values from 0 to 4,294,967,295
   short value = 5;                     //is stored in 2 bytes, holds values from -32,768 to 32,767
   unsigned short positive_value = 5;  //is stored in 2 bytes, holds values from 0 to 65,535
   printf("first %d, second %u, third %hd, fourth %hu", number - 11, positive_number - 11, value - 6, positive_value - 6);
   return 0;
}