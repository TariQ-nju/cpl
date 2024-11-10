//
// Created by tariq on 24-10-18.
//插入排序法
#include <stdio.h>
#define MAX_LEN 10000
#define RANGE 10
int main() {
    printf("\n");
    int numbers[MAX_LEN]={0};
    int size = 10;
    for(int i=1;i<size;i++) {
        //前面i张已经排好序
        int key=numbers[i];
        int j=i-1;
        while(numbers[j]>key&&j>=0) {
            numbers[j+1]=numbers[j];
            j--;
        }
        for(int i=1;i<size;i++) {
            printf("%d",numbers[i]);
        }
        printf("\n");
        numbers[j+1]=key;
    }
    for(int i = 0; i < size; i++) {
        printf("%d",numbers[i]);
    }
    printf("\n");
    return 0;
}