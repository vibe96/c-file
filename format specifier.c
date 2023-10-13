#include<stdio.h>

int main(){

    // format specifier % = defines and formats a type of data to be displayed

    /*
    
        %c = character
        %s = string (array of characters)
        %f = float
        %lf = double
        %d = integer

        %.1 = decimal precision
        %1 = minimum field width
        %- = left align

    */ 

   float item1 = 4.33;
   float item2 = 399;
   float item3 = 32.23;

   printf("Item 1 : $%.2f\n", item1);
   printf("Item 2 : $%.2f\n", item2);
   printf("Item 3 : $%.2f\n", item3);
   return 0;
}