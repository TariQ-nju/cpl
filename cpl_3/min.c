#include<stdio.h>
int main(void) {
    int a,b,c=0;
    scanf("%d %d",&a,&b);  //min=a>=b?c:d ---> 若a>=b成立则计算c并赋值给min，不成立则计算d并赋值给min
    int min=0;
    if(a<b) {
        if(a<c) {
            min=a;
        }
        else  {//a<b,a>c
            min=c;
        }

    }
    else {
        //a>=b
        if(b>c) {
            min=c;

        }
        else {
            min=b;
        }
    }

    return 0;
}