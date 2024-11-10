//这是一则单行注释
/*
 *这是多行注释
 */
#include <stdio.h>//这是头文件

int main(void)//main是一个函数
//y<-------f(x)
//int<--- main(void)----->main这个函数不需要参数，用void
//int integer 整数
{
    printf("Hello, World!\n");//printf还是个函数,来自stdio.h
    int a;
    scanf("%d",&a);
    printf("%d",a);
    return 0;//按照约定，函数正常结束的情况下返回0，出错时返回非0，如1.
    //这里编译器自动当作return 0,最好还是打上。
}