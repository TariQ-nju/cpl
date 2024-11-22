//
// Created by tariq on 24-11-22.
//
#include <stdio.h>
int StrCmp(const char *s1, const char *s2);
int main() {

}
int StrCmp(const char *s1, const char *s2) {
    while (*s1==*s2&&(*s1!='\0'&&*s2!='\0')){s1++,s2++;}
    return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}
