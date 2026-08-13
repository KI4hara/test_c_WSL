#include<stdio.h>

int main (void){
    int soda = 198;
    int milk = 138;
    double tax = 1.05;

    int change = 1000 - (soda + milk * 2) * tax;
    
    printf("%d\n",change);

}