#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include <stdlib.h>
bool prime(int x);
void reverse(char t[],int len);
int n;
int main(){
	int sum=0;
	scanf("%d",&n);
	for(int i=2;i<=n;i++) {
		if (prime(i)) {
			char t[10] = "";
			sprintf(t,"%d",i);
			int len=0,a=i;
			while(a) {
				len++;
				a=a/10;
			}
			reverse(t,len);
			int m=atoi(t);
			if (prime(m)) sum++;
		}
	}
	printf("%d",sum);
	return 0;
}
void reverse(char t[],int len) {
	for(int i=0;i<len/2;i++) {
		char temp=t[len-1-i];
		t[len-1-i]=t[i];
		t[i]=temp;
	}
}
bool prime(int x) {
	int flag = true;
	for (int i = 2; i <= sqrt(x + 0.5); i++) {
		if (x % i == 0) {
			flag = false;
		}
	}
	return flag;
}