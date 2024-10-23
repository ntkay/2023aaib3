class Solution {
public:
    void myDrawBoard(int board[3][3]){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<< board[i][j] << " ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    bool testWin(int board[3][3],int now){
        if(board[0][0]==now && board[0][1]==now && board[0][2]==now) return true;
        if(board[1][0]==now && board[1][1]==now && board[1][2]==now) return true;
        if(board[2][0]==now && board[2][1]==now && board[2][2]==now) return true;
        //
        if(board[0][0]==now && board[1][0]==now && board[2][0]==now) return true;
        if(board[0][1]==now && board[1][1]==now && board[2][1]==now) return true;
        if(board[0][2]==now && board[1][2]==now && board[2][2]==now) return true;

        if(board[0][0]==now && board[1][1]==now && board[2][2]==now) return true;
        if(board[2][0]==now && board[1][1]==now && board[0][2]==now) return true;

        return false;
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {}; //Step3:c���}�C
        int now = 1; //1,2,1,2
        for(auto move : moves){ //step1 c++�i���j��
            int i = move[0], j = move[1]; //step2 ���X�}�C�̪���
            board[i][j] = now;
            //myDrawBoard(board);
            if(testWin(board, now)){
                if(now==1) return "A";
                else return "B";
            }
            now = 3-now;
        }
        if(moves.size()==9) return "Draw";
        else return "Pending";
    }
};
