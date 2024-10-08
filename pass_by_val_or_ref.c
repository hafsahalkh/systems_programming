#include<stdio.h>
void function(int x, int* yp){
   x++;
   *yp = *yp + 1;
}

int main(){
   int x = 0, y = 0;
   function (x, &y);
   printf("x = %d, y = %d", x, y);
}

// the output is x = 0 and y = 1, because we passed x by value (we only copied the variable)
// and passed y by reference, thus modifying the original value of y
// which is why y is incremented