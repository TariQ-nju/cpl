#include<stdio.h>
int arr[2001];int copy[2001];
int main(){
	int n,t=0,min=10,flag=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		scanf("%d",&arr[i]);
		copy[i]=arr[i];
	}
	for(int i=n-1;i>-1;i--) {
		if(arr[i]>arr[i-1]) {
			for(int j=i;j<n;j++) {
				if(arr[j]>arr[i-1])min=arr[j]<min?arr[j]:min;
			}
			for(int j=i;j<n;j++) {if(arr[j]==min){flag=j;break;}}
			t=arr[flag];
			arr[flag]=arr[i-1];
			arr[i-1]=t;
			copy[flag]=arr[flag];
			for(int j=i,l=0;j<n;j++,l++) {arr[j]=copy[n-1-l];}
			break;
		}
	}
	for(int i=0;i<n;i++) {
		if(i=n-1){printf("%d",arr[i]);break;}
		printf("%d ",arr[i]);
	}
	return 0;
}