#include <stdio.h>
//
// Created by tariq on 24-9-27.
int main(void) {
    int radius =100;
    double surfaceArea=4*3.14159*radius*radius;
    double volume=4.0/3*3.14159*radius*radius*radius;//4/3=1 4.0/3=1.333333
    printf(" %-15.4f:volume\n",volume);
    printf(" %-15.4f:surfaceArea\n",surfaceArea);
        //-15.4    15决定字符长度，4决定小数位数,-为开头对齐的flag
    return 0;
}
