#include <math.h>
#include <stdio.h>

int num[4];
static char *ones[] = {
    "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
    "ten", "eleven", "twelve", "thirteen", "fourteen",
    "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

static char *tens[] = {
    "0", "1", "twenty", "thirty", "forty",
    "fifty", "sixty", "seventy", "eighty", "ninety"};
void eng(int n);
int main() {
    long long n;
    scanf("%lld", &n);//__int32
    if(n<0) {printf("minus ");n*=-1;}
    if(n==0) {printf("zero");return 0;}
    int i=3;
    do{

        num[i--]=n%1000;

        n/=1000;
    }while(n>0);//每三位分隔开来
    for(int i=0;i<4;i++) {
        if(num[i]==0) continue;
        switch(i) {
            case 0:eng(num[i]);printf("billion ");break;
            case 1:eng(num[i]);printf("million ");break;
            case 2:eng(num[i]);printf("thousand ");break;
            case 3:eng(num[i]);
            default:
        }
    }
    return 0;
}
void eng(int n) {
    int nnum[3]={0};
    int i=2;
    do{

        nnum[i--]=n%10;
        n/=10;
    }while(n!=0);
    for(int i=0;i<3;i++) {
        if(nnum[i]==0) continue;
        switch(i) {
            case 0:printf("%s ",ones[nnum[i]]);printf("hundred ");
            if(nnum[1]!=0||nnum[2]!=0)printf("and ");break;
            case 1:if(nnum[1]>1){printf("%s",tens[nnum[i]]);if(nnum[2]!=0)printf("-");else printf(" ");break;}
                    else {printf("%s",ones[nnum[i]*10+nnum[i+1]]);return;}
            case 2:printf("%s ",ones[nnum[i]]);
        }
    }
}
