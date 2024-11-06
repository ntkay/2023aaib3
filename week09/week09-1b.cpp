class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size();
        int N = matrix[0].size();
        int i=0,j=0,dir=0; //0�k,1�U,2��,3�W
        int dI[4]={0,1,0,-1};//���ʪ���
        int dJ[4]={1,0,-1,0};//���ʪ���

        vector<int> ans;
        for(int k=0;k<N-1;k++){
            ans.push_back(matrix[i][j]);
            i += dI[dir];//���ʪ���
            j += dJ[dir];//���ʪ���
        }
        dir=(dir+1)%4;
        for(int kk=1;kk<=M+1;kk++){
            for(int k=0;k<M-kk;k++){
                ans.push_back(matrix[i][j]);
                i += dI[dir];//���ʪ���
                j += dJ[dir];//���ʪ���
            }
            dir=(dir+1)%4;
            for(int k=0;k<N-kk;k++){
                ans.push_back(matrix[i][j]);//�⵪�ש�Jans
                i += dI[dir];//���ʪ���
                j += dJ[dir];//���ʪ���
            }
            dir=(dir+1)%4;
        }
        return ans;
    }
};
