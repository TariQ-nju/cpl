#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    printf("%d\n", sizeof(int));
    time_t start=time(NULL);//返回自1970.1.1到现在经历的秒数
    time_t end=time(NULL);
    char a;//-128---127
    signed char b;//-128---127
    unsigned char c;//0---255
    printf("%llu\n",CHAR_MAX);
    int i=3.6;//直接吧小数部分抹去
    unsigned int m=UINT_MAX;
    int j=m;
    printf("%d\n",i);
    printf("%u\n",m);
    printf("%d\n",j);
    float f=3.6F;
    return 0;
}
