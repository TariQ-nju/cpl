#include <cmath>
#include <math.h>
#include <stdio.h>
int main(void) {
    int radius=10;/*&radius表示radius的地址*/
    double const PI=3.141592653589793;
    double circumference=2*PI*radius;
    double area=PI*pow(radius,2);//pow(x,y)求x的y次方
    printf("The area of the circle is %.2f\n",area);//.2表示保留到小数点后两位
    printf("circumference is %.2f\n",circumference);
    return 0;

}