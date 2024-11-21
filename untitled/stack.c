
#include<stdio.h>
#include<string.h>
char stack[1000];
void push(char*a,char b);
void pop(char*a);
void top(char*a);
void print(char*a);
int main(){
    int n;
    char motion[1000]="\0";
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",motion);
        if(strcmp(motion,"push")==0) {
            char c;
            getchar();
            scanf("%c",&c);
            push(stack,c);
        }
        if(strcmp(motion,"pop")==0) pop(stack);
        if(strcmp(motion,"top")==0) top(stack);
        if(strcmp(motion,"print")==0) print(stack);
    }
    return 0;
}
void push(char*a,char b){
    int i=0;
    while(a[i]!='\0') i++;
    while(i>0) {a[i]=a[i-1];i--;}
    a[0]=b;
}
void pop(char*a){
    if(*a=='\0'){printf("Empty\n");return;}
    int len=0;
    while(a[len]!='\0') len++;
    for(int i=0;i<len-1;i++)a[i]=a[i+1];
    a[len-1]='\0';
}
void top(char*a){
    if(*a=='\0'){printf("Empty\n");return;}
    printf("%c\n",*a);
}
void print(char*a){
    if(*a=='\0'){printf("Empty\n");return;}
    int len=0;
    while(a[len]!='\0') len++;
    for(int i=0;i<len;i++) printf("| %c |\n",a[i]);
    printf("|===|");
}