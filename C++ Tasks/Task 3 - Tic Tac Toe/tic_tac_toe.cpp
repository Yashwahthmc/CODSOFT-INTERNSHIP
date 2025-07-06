#include <iostream>
using namespace std;
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char currentMark;
int currentPlayer;
void displayBoard(){
    cout<<"\n";
    cout<<" "<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<endl;
    cout<<"---|---|---\n";
    cout<<" "<< board[1][0]<<" | "<<board[1][1]<< " | " <<board[1][2]<<endl;
    cout<<"---|---|---\n";
    cout<<" "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<endl;
    cout<<"\n";
}
bool checkWin(){
    for (int i=0;i<3;i++) {
        if((board[i][0]==currentMark&&board[i][1]==currentMark&&board[i][2]==currentMark)||
            (board[0][i]==currentMark&&board[1][i]==currentMark&&board[2][i]==currentMark)){
            return true;
        }
    }
    if ((board[0][0]==currentMark&&board[1][1]==currentMark&&board[2][2]==currentMark)||
        (board[0][2]==currentMark&&board[1][1]==currentMark&&board[2][0]==currentMark)){
        return true;
    }
    return false;
}
bool checkTie(){
    for (int i=0;i<3;i++)
        for (int j=0;j<3;j++)
            if(board[i][j]!='X'&&board[i][j]!='O')
                return false;
    return true;
}
void takeTurn(){
    int move;
    cout<<"Player "<<currentPlayer<< ",enter your move (1-9): ";
    cin>>move;

    int row=(move-1)/3;
    int col=(move-1)%3;
    if (move<1||move>9||board[row][col]=='X'||board[row][col]=='O'){
        cout << "Invalid move! Try again.\n";
        takeTurn();
    }else{
        board[row][col]=currentMark;
    }
}
int main() {
    cout<<"🎮 Welcome to Tic-Tac-Toe Game (2 Player Mode)"<<endl;
    currentPlayer=1;
    currentMark='X';
    while(true){
        displayBoard();
        takeTurn();
        if (checkWin()){
            displayBoard();
            cout<<"🏆 Player "<<currentPlayer<<" ("<<currentMark<<") wins!"<<endl;
            break;
        }
        if (checkTie()){
            displayBoard();
            cout<<"🤝 It's a tie!"<<endl;
            break;
        }
        currentPlayer=(currentPlayer==1)?2:1;
        currentMark=(currentMark=='X')?'O':'X';
    }
    return 0;
}
