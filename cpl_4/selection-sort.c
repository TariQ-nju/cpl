//
// Created by tariq on 24-10-11.
//
#include<stdio.h>
#define NUM 5
int numbers[NUM]={};
int len=-1;
int main() {
    while(scanf("%d",&numbers[++len])!=EOF);//放不进去input failure时返回EOF，通常为-1
    for(int i=0;i<len;i++) {                      //类型不匹配match failure返回在此之前返回了多少数据
        printf(" %d",numbers[i]);

    }

    printf("\n");
    for(int i=0;i<len;i++) {
        int min=numbers[i];
        int min_index=i;
        for(int j=i+1;j<len;j++) {
            if(numbers[j]<min) {
                min=numbers[j];
                min_index=j;
            }
        }
        int temp=numbers[min_index];
        numbers[min_index]=numbers[i];
        numbers[i]=temp;
        for(int i=0;i<len;i++) {
            printf(" %d",numbers[i]);
        }
        printf("\n");
    }
    return 0;
}