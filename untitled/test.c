#include<stdio.h>
int main(){
	int s,i,n ,t,o;
	scanf("%d%d%d%d%d",&s,&i,&n,&t,&o);
	switch(s){
		case 0:if(o==i)s=1;break;
		case 1:if(o==n)s=2;else if(o==i)s=1;else s=0;break;
		case 2:if(o==t)s=3;else if(o==i)s=1;else s=0;break;
		case 3:if(o==i)s=1;else s=0;break;
	}
	printf("%d",s);
	return 0;
}