#include<stdio.h>
#include<stdbool.h>
#include <string.h>
void pop(char*a);
char top(char*a);
void push(char*a,char b);
void reset(int *a);
bool check(char a);
char stack[100000];
int le=0;
int main(void) {
    return 0;
}
void reset(int *a) {
    *a=0;
}
char top(char*a){
    return a[le-1];
}
void pop(char*a){
    a[le-1]='\0';
    le--;
}
void push(char*a,char b){
    a[le]=b;
    a[le+1]='\0';
    le++;
}
bool check(char a) {
    if (a=='{'||a=='['||a=='(') return true;
    else return false;
}