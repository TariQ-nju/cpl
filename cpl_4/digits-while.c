#include <stdio.h>
//
// Created by tariq on 24-10-11.
//
int main() {
    int number=0;
    scanf("%d",&number);
    int num_of_digits=0;

    do{                     //do-while 会先执行一次循环体再判断条件是否成立
        number=number/10;   //while()后面的;不能丢
        num_of_digits++;
    }while(number>0);
    printf("number of digits is %d",num_of_digits);
    return 0;
}