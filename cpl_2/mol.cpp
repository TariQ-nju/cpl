//
// Created by tariq on 24-9-27.
//
#include <stdio.h>
int main() {
    double const MOL=6.02e23;//e大小写都行 表示科学记数法的10的N次方
    const double GRAM_PER_MOL=32;
    int gram=6;
    double quantity=1.0*gram/GRAM_PER_MOL*MOL;//1.0*gram强制将数据类型改为浮点型
    printf("quantity:%.3e\nquantity:%.5g\n",quantity,quantity);
    /*e表示科学记数法.3为保留三位小数
     *.5g这里表示保留五位有效数字但是g很复杂*/
    printf("%.2d",7);//.2d表示整数显示位数,不足则向前取0
    //%[flag][长度].【精度】变量
    //字符串自带一个\0占据一个字节，如“tayu”长度为5字节
    return 0;
}