//
// Created by tariq on 24-11-22.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strcpy1(char *dest, const char *src);
void strcpy2(char *dest, const char *src);
void strcpy3(char *dest, const char *src);
void strcpy4(char *dest, const char *src);
void strcpy5(char *dest, const char *src);
void strcpy6(char *dest, const char *src);
char *StrCpyStd(char *dest, const char *src);
int main() {
    const char *src = "Hello World";
    char *dest =malloc(strlen(src)+1);
    strlen(StrCpyStd(dest,src));
    printf("dest=%s\n",dest);
    free(dest);
}
void strcpy1(char *dest, const char *src) {
    int i=0;
    while (src[i]!='\0') {dest[i]=src[i];i++;}
    dest[i]='\0';
}
void strcpy2(char *dest, const char *src) {
    int i=0;
    while ((dest[i]=src[i])!='\0') i++;//(dest[i]=src[i])的值为左边的dest[i]的值.
}
void strcpy3(char *dest, const char *src) {
    int i=0;//src[i]等效于*(src+i)
    while ((*(dest+i)=*(src+i))!='\0'){i++;}
}
void strcpy4(char *dest, const char *src) {
    while ((*dest=*src)!='\0') {src++;dest++;}
}
void strcpy5(char *dest, const char *src) {
    while ((*dest++=*src++)!='\0');//*dest=*src;*dest!='\0';src++;dest++;
}
void strcpy6(char *dest, const char *src) {
    while(*dest++=*src++);
}
char *StrCpyStd(char *dest, const char *src) {
    for (char*s=dest;(*s++=*src++)!='\0';);
    return dest;
}

