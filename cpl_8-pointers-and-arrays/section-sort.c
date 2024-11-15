//
// Created by tariq on 24-11-15.
//
#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int size);//int arr[]为第一个元素的地址，int*类型，也可作int *arr
                                     //arr[i]=*(arr+i)=i[arr]
                                    //p-q要求p和q指向同一个数组，结果为p与q对应的数组元素的下标的差对应的元素的地址
                                    //&arr[i]=&(*(arr+i))=arr+i
                                    //数组名不是变量，即指向的地址不可变，一定是第一个元素的地址
int main() {
    char str[5];
    scanf("%s", str);


//动态内存管理
    int len=0;
    scanf("%d", &len);
    //int *numbers=(int*)malloc(sizeof(int)*len); C语言中不必用(int*)进行强制类型转换
    int *nums =malloc(len*sizeof(*nums));//这样可以只改动nums的类型
    if(nums==NULL) {exit(1);}//判断分配是否成功
    /*malloc(将申请的内存所占的字节数)返回一个指向申请到的内存空间的首地址的指针（指针类型为void）
     *malloc可能会失败!(此时返回空指针NULL)记得判断一下分配是否成功
     */
    free(nums);//释放内存

}