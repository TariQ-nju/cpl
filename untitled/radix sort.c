//
// Created by tariq on 24-11-17.
//
for(int i=1;i<=6;i++) {
    int bucket[10][10000]={0};
    int index[10]={0};
    for(int j=0;j<m;j++) {
        int l=b[j]%(int)pow(10,i)/(int)pow(10,i-1);
        bucket[l][index[l]++]=b[j];
    }

    int x=0;
    for(int j=0;j<10;j++) {
        for(int k=0;k<=1000000;k++) {
            if(bucket[j][k]==0)break;
            b[x++]=bucket[j][k];
        }
    }
}