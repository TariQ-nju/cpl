//
// Created by tariq on 24-9-29.
//
#include <stdio.h>
#define NUM 5
int main() {                         //可用#define NUM 5来用NUM替换5，既不存在magic number 也没有VLA
    //const int NUM=5;                 //numbers[NUM]可变长度数组VLA variable-length array,最好别这样写
    int numbers[NUM]={11,56,78,13,23};//number的类型为int[5],不是int[]
    int min=numbers[0];
    for(int i=1;i<5;i++) {
        //for(初始值;条件;迭代表达式）{循环体}
        if(numbers[i]<min) {
            min=numbers[i];
        }
    }
    printf("min=%d\n",min);
    return 0;
}