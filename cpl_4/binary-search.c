#include <stdio.h>
//
// Created by tariq on 24-10-11.
//
int dictionary[10]={1,1,2,3,5,8,13,21,34,55};
int main() {
    int key=0;
    scanf("%d",&key);
    int low=0;
    int high=9;
    int index=-1;
    while(low<=high) {
        int mid=(low+high)/2;
        if(key==dictionary[mid]) {
            index=mid;
            break;//此处break换成high=mid-1就可以找到一串key最左边的key的位置（到最后low>high结束循环）
        }
        else if(key>dictionary[mid]) low=mid+1;
        else high=mid-1;
    }
        if(index==-1) printf("Not Found\n");
        else printf("The index of %d is %d ",key,index);



}