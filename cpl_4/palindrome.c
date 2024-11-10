//
// Created by tariq on 24-10-11.
//
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define LEN 21
char string[LEN]="";
int main() {
    printf("Input a string containing at most 20 characters: ");
    fflush(stdout);
    scanf("%20s",string);
    int len=0;
    while(string[len]!='\0') len++; //可以用int len = strlen(string);
    printf("The length of \"%s\" is %d.\n",string,len);
    bool isPalindrome=true;
    for(int i=0,j=len-1;i<j;i++,j--) {
        if(string[i]!=string[j]) {
            isPalindrome=false;
            break;
        }

    }
    if(isPalindrome==true) {
        printf("The string is palindrome.\n");
    }
    else {
        printf("The string is not palindrome.\n");
    }
    return 0;
}








