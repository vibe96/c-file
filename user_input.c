#include<stdio.h>

int main(){

    int price;

    printf("Input amount : \n");
    scanf("%d", &price); //&price is the address of the operator

    printf("You are paying $%d :\n", price);


    return 0;

}