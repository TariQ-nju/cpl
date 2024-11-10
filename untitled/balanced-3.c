//
// Created by tariq on 24-10-22.
//
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    char str[21]=" ";
    for(int i=0;i<n;i++) {
        scanf("%s",str);
        int len=strlen(str);
        int flag=0;
        for(int j=0;j<len;j++) {
            if((str[j]==45||(str[j]>47&&str[j]<58))==0) {
                printf("Radix Error\n");
                flag=1;
                break;
            }
        }
        int a=20;
        char new_num[21]="\0";
        if(str[0]!='-'){
            unsigned long long num=atoi(str);
            do {
                int rem;
                rem=num%3;
                num=num/3;
                new_num[a--]=rem+48;
            }while(num!=0);//把str转换成三进制的字符串
            /*do{
                int rem;
                rem=num%3;
                num=num/3;
                new_num+=rem*pow(10,a);
                a++;
            }while(num!=0);
            for(int j=0;j<a;j++) {
                if(j==0) str[j]=48+new_num/(int)pow(10,a-j-1);
                else str[j]=48+new_num/(int)pow(10,a-j-1)
                %10;
            }*/
            //sprintf(str,"%llu",new_num);
            for(int i=0;i<=20;i++) {
                if(new_num[i]=='\0') continue;
                if(new_num[i]!='\0') {
                    for(int j=i-1;j>=0;j--) {
                        if(new_num[j]=='\0') {
                            new_num[j]=new_num[j+1];
                            new_num[j+1]='\0';
                        }
                        else break;
                    }
                }
            }
            int bj=0;
            for(int k=20;k>=0;k--) {
                if(new_num[k]=='1'&&bj==1) {new_num[k]='2';bj=0;}
                if(new_num[k]=='0'&&bj==1) {new_num[k]='1';bj=0;}
                if(new_num[k]=='2'&&bj==0) {new_num[k]='Z';bj=1;}
                if(new_num[k]=='2'&&bj==1) {new_num[k]='0';bj=1;}
            }
            if(bj==1) {
                for(int k=20;k>=0;k--) new_num[k+1]=new_num[k];
                //for(int k=a+1;k<15;k++) str[k]='\0';
                new_num[0]='1';
            }
        }
        else {
            unsigned long long num=atoi(str);
            num=abs(num);

            /*do{
                int rem=num%3;
                num=num/3;
                new_num+=rem*pow(10,a);
                a++;
            }while(num!=0);
            for(int j=0;j<a;j++) {
                if(j==0) str[j]=48+new_num/(int)pow(10,a-j-1);
                else str[j]=48+new_num/(int)pow(10,a-j-1)
                %10;
            }*/
            //sprintf(str,"%d",new_num);
            do {
                int rem;
                rem=num%3;
                num=num/3;
                new_num[a--]=rem+48;
            }while(num!=0);//把str转换成三进制的字符串
            /*do{
                int rem;
                rem=num%3;
                num=num/3;
                new_num+=rem*pow(10,a);
                a++;
            }while(num!=0);
            for(int j=0;j<a;j++) {
                if(j==0) str[j]=48+new_num/(int)pow(10,a-j-1);
                else str[j]=48+new_num/(int)pow(10,a-j-1)
                %10;
            }*/
            //sprintf(str,"%llu",new_num);
            for(int i=0;i<=20;i++) {
                if(new_num[i]=='\0') continue;
                if(new_num[i]!='\0') {
                    for(int j=i-1;j>=0;j--) {
                        if(new_num[j]=='\0') {
                            new_num[j]=new_num[j+1];
                            new_num[j+1]='\0';
                        }
                        else break;
                    }
                }
            }
            int bj=0;
            for(int k=20;k>=0;k--) {
                if(new_num[k]=='1'&&bj==1) {new_num[k]='2';bj=0;}
                if(new_num[k]=='0'&&bj==1) {new_num[k]='1';bj=0;}
                if(new_num[k]=='2'&&bj==0) {new_num[k]='Z';bj=1;}
                if(new_num[k]=='2'&&bj==1) {new_num[k]='0';bj=1;}
            }
            if(bj==1) {
                for(int k=20;k>=0;k--) new_num[k+1]=new_num[k];
                //for(int k=a+1;k<15;k++) str[k]='\0';
                new_num[0]='1';
            }
            for(int k=20;k>=0;k--) {
                if(new_num[k]=='1') {new_num[k]='Z';continue;}
                if(new_num[k]=='Z') {new_num[k]='1';continue;}
            }
        }
        if(flag==0&&i!=n-1) printf("%s\n",new_num);
        if(flag==0&&i==n-1) printf("%s",new_num);
    }
    return 0;
}

