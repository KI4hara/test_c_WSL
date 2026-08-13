#include<stdio.h>

int main(void){

    int list_pr;

    scanf("%d",&list_pr);

    printf("一割引き：　%d \n",(int)(list_pr*0.9));
    printf("三割引き：　%d \n",(int)(list_pr*0.7));
    printf("五割引き：　%d \n",(int)(list_pr*0.5));
    printf("八割引き：　%d \n",(int)(list_pr*0.2));

    return 0;
}