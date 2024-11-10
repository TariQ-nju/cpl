//
// Created by tariq on 24-9-29.
//
#include <stdio.h>
int main() {
    int year=0;
    int leap=0;
    scanf("%d",&year);           //逻辑运算遵循短路求值，即前方成立后不再计算后方，可用来节省资源
if((year%4==0 &&year%100!=0)            //逻辑运算遵循短路求值，即前方成立后不再计算后方，可用来节省资源
    ||year%400==0) {                      /*4整除year且100不整除year 或者 400整除year
                                            &&--->and    ||--->or
                                            !--->not
                                            year==0等价于!(year!=0)*/
                                        //else语句可以不要
    leap=1;                             /*作为if和for的条件时，0为假，其他所有值都为真
                                          if(leap)等价于if(leap!=0)*/
}
    leap=(year%4==0 &&year%100!=0)            //逻辑表达式本身就是一个值
    ||year%400==0;
    printf("%d",leap);

}