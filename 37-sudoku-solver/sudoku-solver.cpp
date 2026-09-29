class Solution {
public:
bool isSafe(vector<vector<char>>& board,int row,int col,char dig){
    //Horizontal
    for(int i=0;i<9;i++){
        if(board[row][i]==dig){
            return false;
        }
    }
    //verticle
     for(int j=0;j<9;j++){
        if(board[j][col]==dig){
            return false;
        }
    }
    //Grid
    int sR=(row/3)*3;
    int  sC=(col/3)*3;
    for(int i=sR;i<sR+3;i++){
        for(int j=sC;j<sC+3;j++){
            if(board[i][j]==dig){
                return false;
            }
        }
    }
    return true;
}
bool solve(vector<vector<char>>& board,int row,int col){
    if(row==9){
        return true;
    }

    int nextR=row, nextC=col+1;
    if(nextC==9){
      nextR=row+1;
      nextC=0;
    }

    if(board[row][col]!='.'){
        return solve(board,nextR,nextC);
    }

    for(char dig='1';dig<='9';dig++){
        if(isSafe(board,row,col,dig)){
            board[row][col]=dig;

            if(solve(board,nextR,nextC)){
                return true;
            }
            board[row][col]='.';
        }
    }
    return false;
}
    void solveSudoku(vector<vector<char>>& board) {
        solve(board,0,0);
    }
};