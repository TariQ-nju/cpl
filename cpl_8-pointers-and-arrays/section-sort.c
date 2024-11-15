//
// Created by tariq on 24-11-15.
//
#include <stdio.h>
void printArray(int arr[], int size);//int arr[]为第一个元素的地址，int*类型，也可作int *arr
                                     //arr[i]=*(arr+i)=i[arr]
                                    //p-q要求p和q指向同一个数组，结果为p与q对应的数组元素的下标的差对应的元素的地址
                                    //&arr[i]=&(*(arr+i))=arr+i
                                    //数组名不是变量，即指向的地址不可变，一定是第一个元素的地址
int main() {
    char str[5];
    scanf("%s", str);
}