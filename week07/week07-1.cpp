class Solution {
public:
    void myDrawBoard(int board[3][3]){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<< board[i][j] << ' ';
            }
            cout<<endl;
        }
        cout<<endl;
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {}; //Step3:c���}�C
        for(auto move : moves){ //step1 c++�i���j��
            int i = move[0], j = move[1]; //step2 ���X�}�C�̪���
            board[i][j] = 1;
            myDrawBoard(board);
        }
        return "B"; // "A" or "B" or "Draw"
    }
};
