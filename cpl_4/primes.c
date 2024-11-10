#include <stdio.h>
#include<math.h>
#include<stdbool.h>
int main(void) {
    int max;
    scanf("%d", &max);
    int count = 0;
    for(int i = 2; i <= max; i++) {//i放在for里面限定其作用域，便于重复使用
        bool prime=true;//prime 放里面才能每次重置为true
        for(int j = 2; j*j<=i; j++)
        {
            if(i % j == 0) {prime=false; break;}
        }

        if(prime==true) {count++;printf("%d ", i);}
    }

    printf("\n%d",count);
    return 0;
}
