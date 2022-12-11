#include<stdio.h>
void update_score(int[][2],char,char,char);
void display(int[][2]);
int score(int[][2],char);
void winner(int[][2]);
int run_tournament();
int main()
{
    int score_board[4][2],i;
    printf("The four respective players playing are A,B,C,D\n");
    for(i=0;i<=3;i++)
        score_board[i][1]=0;
    run_tournament(score_board);
    display(score_board);
    return 0;
}
void update_score(int score_board[][2],char m,char pw,char pl)
{
    if(m=='W')
    {
        if(pw=='A')
            score_board[0][1]=score_board[0][1]+2;
        else if(pw=='B')
            score_board[1][1]=score_board[1][1]+2;
        else if(pw=='C')
            score_board[2][1]=score_board[2][1]+2;
        else
            score_board[3][1]=score_board[3][1]+2;
    }
       
    if(m=='D') 
    {
        if(pw=='A' && pl=='B')
        {
            score_board[0][1]=score_board[0][1]+1;
            score_board[1][1]=score_board[1][1]+1;
        }
        else if(pw=='C' && pl=='D')
        {
            score_board[2][1]=score_board[2][1]+1;
            score_board[3][1]=score_board[3][1]+1;
        }
        else if(pw=='A' && pl=='C')
        {
            score_board[0][1]=score_board[0][1]+1;
            score_board[2][1]=score_board[2][1]+1;
        }
        else if(pw=='A' && pl=='D')
        {
            score_board[0][1]=score_board[0][1]+1;
            score_board[3][1]=score_board[3][1]+1;
        }
        else if(pw=='B' && pl=='C')
        {
            score_board[1][1]=score_board[1][1]+1;
            score_board[2][1]=score_board[2][1]+1;
        }
        else 
        {
            score_board[1][1]=score_board[1][1]+1;
            score_board[3][1]=score_board[3][1]+1;
        }
    }
}       

void display(int score_board[][2])
{
    int i,j;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("%d",score_board[i][j]);
        }
        printf("\n");
    }
}

int score(int score_board[][2],char p)
{
     if(p=='A')
        printf("%d ",score_board[0][1]);
    else if(p=='B')
        printf("%d ",score_board[1][1]);
    else if(p=='C')
        printf("%d ",score_board[2][1]);
    else 
        printf("%d ",score_board[3][1]);
}

void winner(int score_board[][2])
{
    int max,i;
    max=score_board[0][1];
    for(i=0;i<=3;i++)
    {
        if(score_board[i][1]>max)
            max=score_board[i][1];
    }
}

int run_tournament(int score_board[][2])
{
    char m1,m2,m3,m4,m5,m6,pw,pl;
    printf("The result of the match can be win,loss and draw enter W,L and D corresponding to it\n");
    printf("In case of draw result also enter two players\n");
    printf("Match 1 is between A and B\n");
    printf("Enter the result of Match1 along with player who won and loss\n");
    scanf("%c%c%c",&m1,&pw,&pl);
    getchar();
    update_score(score_board,m1,pw,pl);
    getchar();
    printf("Match 2 is between C and D\n");
    printf("Enter the result of Match2 along with player who won and loss\n");
    scanf("%c%c%c",&m2,&pw,&pl);
    getchar();
    update_score(score_board,m2,pw,pl);
    getchar();

    printf("Match 3 is between A and D\n");
    printf("Enter the result of Match3 along with player who won and loss\n");
    scanf("%c%c%c",&m3,&pw,&pl);
    getchar();
    update_score(score_board,m3,pw,pl);
    getchar();

    printf("Match 4 is between B and C\n");
    printf("Enter the result of Match4 along with player who won and loss\n");
    scanf("%c%c%c",&m4,&pw,&pl);
    getchar();
    update_score(score_board,m4,pw,pl);
    getchar();

    printf("Match 5 is between A and C\n");
    printf("Enter the result of Match5 along with player who won and loss\n");
    scanf("%c%c%c",&m5,&pw,&pl);
    getchar();
    update_score(score_board,m5,pw,pl);
    getchar();

    printf("Match 6 is between B and D\n");
    getchar();
    printf("Enter the result of Match6 along with player who won and loss\n");
    scanf("%c%c%c",&m6,&pw,&pl);
    getchar();
    update_score(score_board,m6,pw,pl);
    getchar();
}