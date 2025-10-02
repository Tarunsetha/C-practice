//Q4>Four players are playing a tournament of Chess with round robin method (each player will play with every other player). Each win has 2 points, draw has 1 point and loose has 0 points. Declare a score_board two dimensional array to store the scores of the players agains each player?
#include<stdio.h>
int main(){
    int score_board[4][4]={0};
    int i,j;

    score_board[0][1] = 2;
    score_board[1][0] = 0;

    score_board[0][2] = 1;
    score_board[2][0] = 1;

    score_board[0][3] = 0;
    score_board[3][0] = 2;


    score_board[1][2] = 1;
    score_board[2][1] = 1;

    score_board[1][3] = 2;
    score_board[3][1] = 0;

    score_board[2][3] = 0;
    score_board[3][2] = 2;

    printf("Score Board (rows = players):\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d\t",score_board[i][j]);
        }
         printf("\n");
    }
    
}