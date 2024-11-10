//
// Created by tariq on 24-10-25.
//
#include<stdio.h>
#include <stdlib.h>

void PrintCharacter(char ch,int count);
int main() {
    strtol("hello",NULL,10);
    int lines;
    scanf("%d",&lines);
    for(int i=0;i<lines;i++) {
        PrintCharacter(' ',lines-1-i);
        PrintCharacter('*',2*i+1);
        if(i<lines-1)printf("\n");
    }
}
void PrintCharacter(char ch,int count) {
    for (int i = 0; i < count; i++) printf("%c",ch);
}