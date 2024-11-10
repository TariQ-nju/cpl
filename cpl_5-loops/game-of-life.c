#include <stdio.h>
#include <windows.h>
#include<stdlib.h>
#define SIZE 6
const int board[SIZE][SIZE]={//二维数组,没写的默认为0
    {0},
    {0,1,1,0,0,0},
    {0,1,1,0,0,0},
    {0,0,0,1,1,0},
    {0,0,0,1,1,0},
    {0}
    };
/*const int board1[SIZE][SIZE]={
    [0]={0},
    [1]={[1]=1,[2]=1},
    [2]={[1]=1,[2]=1}
    };
    */
/*const int board2[SIZE][SIZE] {
    [2][1]=1,[2][2]=1

};*/
/*const int board3[SIZE][SIZE]={
    0,0,0,0,0,1,1,
    1,1,1,0,0,0,0,
};*/

int main(void) {
    int old_board[SIZE+2][SIZE+2]={0};//方便处理边上的计数
    for(int i=1;i<=SIZE;i++) {
        for(int j=1;j<=SIZE;j++) {
            old_board[i][j]=board[i-1][j-1];
        }
    }//将初始数组扩展一圈0；
    for(int i=1;i<=SIZE;i++) {
        for(int j=1;j<=SIZE;j++) {
            printf("%c ",old_board[i][j]?'*':' ');
        }
        printf("\n");
    }
    int new_board[SIZE+2][SIZE+2]={0};
    for(int round=1;round<=10;round++) {
    for(int i=1;i<=SIZE;i++) {
        for(int j=1;j<=SIZE;j++) {
            int num_of_live_neighbours=
                old_board[i-1][j-1]+old_board[i-1][j]+old_board[i-1][j+1]
                +old_board[i][j-1]+old_board[i][j+1]
                +old_board[i+1][j-1]+old_board[i+1][j]+old_board[i+1][j+1];
            if(old_board[i][j]) {
                new_board[i][j]=(num_of_live_neighbours==2||num_of_live_neighbours==3);//简化
                /*if (num_of_live_neighbours==2||num_of_live_neighbours==3)
                    new_board[i][j]=1;
                else
                    new_board[i][j]=0;*/
            }
            else {
                new_board[i][j]=(num_of_live_neighbours==3);
                /*if(num_of_live_neighbours==3)
                    new_board[i][j]=1;
                else
                    new_board[i][j]=0;*/
            }
        }
    }
    for(int i=1;i<=SIZE;i++) {
        for(int j=1;j<=SIZE;j++) {
            printf("%c ",new_board[i][j]?'*':' ');
        }
        printf("\n");
    }

    for(int i=1;i<=SIZE;i++) {
        for(int j=1;j<=SIZE;j++) {
            old_board[i][j]=new_board[i][j];
        }
    }                                       //拷贝,准备循环
        Sleep(100);//include<windows.h>括号中以毫秒为单位
        system("cls");//include<stdlib.h>
}
    return 0;
}
