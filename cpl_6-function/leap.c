#include<stdbool.h>
#include <stdio.h>
bool IsLeapYear(int year);
int main(void) {
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    bool leap=IsLeapYear(year);
    if(leap) printf("YES");
    else printf("NO");
    return 0;
}




//存储类型 返回值类型 函数名（形式参数）{}形参可以不命名
static bool IsLeapYear( int year) {
    bool leap=year%4==0&&year%100!=0||year%400==0;
    return leap;
}
