class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0; //�̦����������H,���h�ֿ�
        for(auto a : accounts){ //�q�@��H,��X�@�ӤHa
            int sum=0; //�j��e��,sum=0
            for(auto b : a){ //a[0]+a[1]+a[2]+...
                sum+=b; //�j�餤�� sum+=b �V�[�V�h
            } //�j��᭱,�ݳo�ӤH���s���`��,�O�_�󦳿�
            if(sum>ans) ans=sum; //�󦳿�,�N��s ans
        }
        return ans; //�j��᭱,ans���ӥ�
    }
};
