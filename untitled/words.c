//
// Created by tariq on 24-11-14.
//
void eng(int n) {
    int nnum[3]={0};
    do{
        int i=2;
        num[i--]=n%10;
        n/=10;
    }while(n!=0);
    for(int i=0;i<3;i++) {
        if(nnum[i]==0) continue;
        switch(i) {
            case 0:printf("%s ",ones[nnum[i]]);printf("hundred ");
            if(nnum[1]!=0||nnum[2]!=0)printf("and");break;
            case 1:printf("%s ",tens[nnum[i]]);if(nnum[2]!=0)printf("-");break;
            case 2:printf("%s ",ones[nnum[i]]);
        }
    }
}