#include <stdio.h>
//
// Created by tariq on 24-10-25.
//
static int dictionary[10]={1,1,2,3,5,8,13,21,34,55};
int binarySearch(int key,int dict[],int size) ;
int main() {
    int key;
    scanf("%d",&key);
    printf("%d",binarySearch(key,dictionary,10));//就写数组名就可以了，在表达式中数组名自动转化为数组首地址
}
int binarySearch(int key,const int dict[],int size) {
    int low=0;
    int high=size-1;
    int mid;
    while(low<=high) {
        mid=(low+high)/2;
        if(key==dict[mid]) return mid;
        else if(key<dict[mid]) high=mid-1;
        else low=mid+1;
    }
}