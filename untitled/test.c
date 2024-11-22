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
    int t=0;
    scanf("%d",&t);
    while(t--) {
        reset(&le);
        char str[100000];
        scanf("%s",str);
        int len=strlen(str);
        int flag=1;
        for(int i=0;i<len;i++) if (str[i]==')') str[i]++;
        for(int i=0;i<len;i++) {
            if(check(str[i]))push(stack,str[i]);
            if(!check(str[i])) {
                if(str[i]==top(stack)+2){pop(stack);}
                else {flag=0;break;}
            }
        }
        if(flag) printf("True\n");
        else printf("False\n");

    }
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