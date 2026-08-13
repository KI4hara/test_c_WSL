#include<stdio.h>
int main(void){
    int a = 10000 , b = 500 , c = 3;
    double pi = 3.14159;

    printf("Aは　%05d です。 \n",a);
    printf("Bは　%05d　です。 \n",b);
    printf("Cは　%05d　です。 \n",c);
    printf("%6.2f\n",pi);

    return 0;
}